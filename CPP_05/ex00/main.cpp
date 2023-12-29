/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:45:12 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/29 12:07:00 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Show-off bureaucrat", 15);
		for (int i = 0; i < 15; i++)
		{
			try
			{
				a.incrementGrade();
				std::cout << a << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Not-so-good bureaucrat", 1450);
		Bureaucrat c(b);
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}