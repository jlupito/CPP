/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:44:57 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/28 16:46:05 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

# define _GREY 	"\033[90m"
# define _END "\1\033[0m\2"

Bureaucrat::Bureaucrat( void ) {
    std::cout << _GREY "Default constructor is called." _END << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name ) {
    if (this->_grade < 1)
        throw GradeTooHighException();
    else if (this->_grade > 150)
        throw GradeTooLowException();
    else {
        std::cout << _GREY "Default constructor with parameters is called." _END << std::endl;
        this->_grade = grade;   
    }
}

Bureaucrat::Bureaucrat( Bureaucrat const &rhs ) : _name( rhs.getName() ), _grade( rhs.getGrade() ) {
    std::cout << _GREY "Copy Constructor is called." _END << std::endl;
	*this = rhs;
	return;
}

Bureaucrat::~Bureaucrat( void ) {
    std::cout << _GREY "Destructor called" _END << std::endl;
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
        std::cout << _GREY "Default constructor with parameters is called." _END << std::endl;
        this->_grade--;   
    }
}

void	Bureaucrat::decrementGrade() {
    if (this->_grade > 149)
        throw GradeTooLowException();
    else {
        std::cout << _GREY "Default constructor with parameters is called." _END << std::endl;
        this->_grade++;   
    }
}