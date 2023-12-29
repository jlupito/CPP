/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:04:59 by jlupito           #+#    #+#             */
/*   Updated: 2023/12/29 15:16:30 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#define _GREY 	"\033[90m"
#define _END "\1\033[0m\2"

AForm::AForm( void ) : _name("random"), _signed(false), _gradeToSign(150), _gradeToExec(150) {
	std::cout << _GREY "Default AForm constructor is called." _END << std::endl;
}

AForm::AForm( std::string name, int const gradeToSign, int const gradeToExec ) 
	: 	_name(name),
		_signed(false),
		_gradeToSign(gradeToSign),
		_gradeToExec(gradeToExec) {
	std::cout << _GREY "Default AForm constructor with parameters is called." _END << std::endl;
	if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
}

AForm::AForm( AForm const &rhs )
	: 	_name(rhs.getName()),
		_signed(rhs.getSigned()),
		_gradeToSign(rhs.getGradeToSign()),
		_gradeToExec(rhs.getGradeToExec()) {
	std::cout << _GREY "Copy Constructor is called." _END << std::endl;
}

AForm::~AForm( void ) {
	std::cout << _GREY "AForm destructor called" _END << std::endl;
}

AForm& AForm::operator=( const AForm &rhs) {
	std::cout << _GREY "Bureaucrat assignment operator is called." _END << std::endl;
	if (this != &rhs) {
        this->_signed = rhs._signed;
	}
	return (*this);
}

std::string AForm::getName() const {
	return this->_name;
}

bool AForm::getSigned() const {
	return this->_signed;
}

int	AForm::getGradeToSign() const {
	return this->_gradeToSign;
}

int	AForm::getGradeToExec() const {
	return this->_gradeToExec;
}

void	AForm::beSigned( Bureaucrat bureaucrat ) {
	if (_signed == true)
		throw AlreadySignedException();
	else if (bureaucrat.getGrade() <= this->getGradeToSign())
		this->_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<( std::ostream &out, AForm const &rhs ) {
	out << "Form " << rhs.getName()
		<< " is signed: " << (rhs.getSigned() ? "Yes" : "No") << std::endl
		<< "Grade required to sign: " << rhs.getGradeToSign() << std::endl
		<< "Grade required to execute: " << rhs.getGradeToExec();
	return out;
}