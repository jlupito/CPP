/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:44:57 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/29 14:43:30 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#define _GREY 	"\033[90m"
#define _END "\1\033[0m\2"

Bureaucrat::Bureaucrat( void ) {
    std::cout << _GREY "Default Bureaucrat constructor is called." _END << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name( name ) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else {
        this->_grade = grade;   
        std::cout << _GREY "Default Bureaucrat constructor with parameters is called." _END << std::endl;
    }
}

Bureaucrat::Bureaucrat( Bureaucrat const &rhs ) : _grade( rhs.getGrade() ), _name( rhs.getName() ) {
    std::cout << _GREY "Copy Constructor is called." _END << std::endl;
	*this = rhs;
	return;
}

Bureaucrat::~Bureaucrat( void ) {
    std::cout << _GREY "Bureaucrat destructor called" _END << std::endl;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat &rhs) {
    std::cout << _GREY "Bureaucrat assignment operator is called." _END << std::endl;
	if (this != &rhs) {
        this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::string const Bureaucrat::getName() const {
    return this->_name;
}

int	Bureaucrat::getGrade() const {
    return this->_grade;
}

void    Bureaucrat::incrementGrade() {
    if (this->_grade < 2)
        throw GradeTooHighException();
    else {
        std::cout << _GREY "Incrementing bucreaucrat: " << this->getName() << _END << std::endl;
        this->_grade--;   
    }
}

void	Bureaucrat::decrementGrade() {
    if (this->_grade > 149)
        throw GradeTooLowException();
    else {
        std::cout << _GREY "Decrementing bucreaucrat: " << this->getName() << _END << std::endl;
        this->_grade++;   
    }
}

void    Bureaucrat::signForm (Form & form) {
    try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e ){
		std::cout << this->_name << " couldn't sign " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<( std::ostream &out, Bureaucrat const &rhs ) {
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return out;
}