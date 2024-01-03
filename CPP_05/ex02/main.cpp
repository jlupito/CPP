/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:45:12 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 14:06:20 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	ShrubberyOK()
{
	Bureaucrat bob("bob", 1);
	ShrubberyCreationForm home("Home");
	try 
	{
		bob.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	ShrubberyKO()
{
	Bureaucrat bob("bob", 138);
	ShrubberyCreationForm home("Home");
	try 
	{
		bob.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.incrementGrade();
		bob.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	RobotomyOK()
{
	Bureaucrat jim("jim", 72);
	Bureaucrat bob("bob", 45);
	RobotomyRequestForm home("Home");
	try 
	{
		jim.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		bob.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	RobotomyKO()
{
	Bureaucrat jim("jim", 148);
	RobotomyRequestForm home("Home");
	try 
	{
		jim.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	PresidentialOK()
{
	Bureaucrat jim("jim", 5);
	PresidentialPardonForm home("Home");
	try 
	{
		jim.signForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jim.executeForm(home);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "=========================" << std::endl;
	ShrubberyOK();
	std::cout << "=========================" << std::endl;
	ShrubberyKO();
	std::cout << "=========================" << std::endl;
	RobotomyKO();
	std::cout << "=========================" << std::endl;
	RobotomyOK();
	std::cout << "=========================" << std::endl;
	PresidentialOK();
	std::cout << "=========================" << std::endl;

}