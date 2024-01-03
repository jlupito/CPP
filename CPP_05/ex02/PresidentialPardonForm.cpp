/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:34:57 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 13:53:26 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#define _GREY 	"\033[90m"
#define _END "\1\033[0m\2"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Random") {
	std::cout << _GREY "Default Presidential constructor is called." _END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << _GREY "Default Presidential constructor w/ paramaters is called." _END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &rhs )
: AForm(rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExec()), _target(rhs.getName()) {
	std::cout << _GREY "Copy Presidential constructor is called." _END << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs ) {
	std::cout << _GREY "Presidential assignment operator is called.." _END << std::endl;
	if (this != &rhs) {
        this->_target = rhs.getTarget();
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << _GREY "Presidential destructor is called." _END << std::endl;
}

const 	std::string	PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (this->getSigned() && executor.getGrade() <= this->getGradeToExec()) {
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}
