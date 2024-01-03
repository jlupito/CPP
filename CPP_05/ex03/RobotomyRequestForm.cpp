/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:34:57 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 13:55:50 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#define _GREY 	"\033[90m"
#define _END "\1\033[0m\2"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Random") {
	std::cout << _GREY "Default Robotomy constructor is called." _END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << _GREY "Default Robotomy constructor w/ param is called." _END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &rhs )
: AForm(rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExec()), _target(rhs.getName()) {
	std::cout << _GREY "Copy Robotomy constructor is called." _END << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs ) {
	std::cout << _GREY "Robotomy assignment operator is called.." _END << std::endl;
	if (this != &rhs) {
        this->_target = rhs.getTarget();
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << _GREY "Robotomy destructor is called." _END << std::endl;
}

const 	std::string	RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (this->getSigned() && executor.getGrade() <= this->getGradeToExec()) {
		std::cout << "!! MAKES DRILLING NOISE !!" << std::endl;
		std::srand(std::time(0));
    	int randomValue = std::rand();
    	if (randomValue % 2)
			std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
		else
			std::cout << this->getTarget() << " could not be robotomized." << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}