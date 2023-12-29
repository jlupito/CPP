/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 09:45:12 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/28 16:39:12 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Bureaucrate aux dents longues", 15);
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
		Bureaucrat b("Bureaucrate ", 1545);
		Bureaucrat c(b);
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}