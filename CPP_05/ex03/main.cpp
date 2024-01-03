/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:45:12 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 15:39:55 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat	jim("Jim", 150);
	Intern		rookie;
	AForm		*form = NULL;
	std::string	nameForm[4] = {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm",
		"Toiletpaper"
	};

	std::cout << "===========================" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		try {
			form = rookie.makeForm(nameForm[i], "Random Target");
			jim.signForm(*form);
			jim.executeForm(*form);
			delete form;
			std::cout << "===========================" << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}