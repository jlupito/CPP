/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:45:12 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/29 15:06:18 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	testInvalidForm()
{
	try{
		Form fInvalid1("Invalid", 0, 0);
		Form fInvalid2("Invalid", 151, 151);		
	}
	catch ( std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void	bureaucratTrySign()
{
	Bureaucrat b1("The Best", 1);
	Bureaucrat b150("The Worst", 150);
	Form f1("#1", 1, 1);
	Form f150("#150", 150, 150);
	
	b150.signForm(f1);
	b1.signForm(f1);
	b1.signForm(f150);
	b1.signForm(f1);
}

int main()
{
	Form form1("Test", 1, 1);
	Form form2(form1);
	std::cout << form1 << std::endl;
	std::cout << "===================" << std::endl;
	testInvalidForm();
	std::cout << "===================" << std::endl;
	bureaucratTrySign();
	std::cout << "===================" << std::endl;
}