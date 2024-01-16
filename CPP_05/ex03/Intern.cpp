/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:22:42 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/16 17:40:02 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#define _GREY 	"\033[90m"
#define _END "\1\033[0m\2"

Intern::Intern() {
	std::cout << _GREY "Default Intern constructor is called." _END << std::endl;
}

Intern::Intern( Intern const &rhs ) {
	std::cout << _GREY "Copy Intern constructor is called." _END << std::endl;
	(void)rhs;
}

Intern::~Intern() {
	std::cout << _GREY "Intern destructor is called." _END << std::endl;
}

Intern & Intern::operator=( const Intern &rhs) {
	std::cout << _GREY "Intern assignment operator is called." _END << std::endl;
	(void)rhs;
	return (*this);
}

AForm*	Intern::makeForm(std::string name, std::string target) {
	AForm* newForm = NULL;
	int form = -1;
	std::string formType[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++) {
		if (name == formType[i])
			form = i;
	}
	switch (form) {
		case 0:
			return newForm = new ShrubberyCreationForm(target);
		case 1:
			return newForm = new RobotomyRequestForm(target);
		case 2:
			return newForm = new PresidentialPardonForm(target);
		default:
			throw Intern::UnexistingFormException();
	}
}