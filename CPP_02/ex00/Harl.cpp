/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/28 10:58:06 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

    Harl::Harl(void) {
		return ;
	}
	
    Harl::~Harl(void) {
		return ;
	}
	
    void Harl::complain( std::string level ) {
		int	int_level = -1;
		std::string complainType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for (int i = 0; i < 4; i++) {
			if (level == complainType[i]) {
				(int_level = i);
			}
		}
		switch (int_level) {
			case 0:
				Harl::_debug();
			case 1:
				Harl::_info();
			case 2:
				Harl::_warning();
			case 3:
				Harl::_error();
				break;
			default:
				std::cout << "Harl only complains with a valid LEVEL entry.\n" << std::endl;
				break;
		}
		return ;
	}

	void Harl::_debug( void ) {
		std::cout << "[ DEBUG ]\n"
			<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\n" << std::endl;
		return ;
	}

	void Harl::_info( void ) {
		std::cout << "[ INFO ]\n"
			<< "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n" << std::endl;
		return ;
	}

	void Harl::_warning( void ) {
		std::cout << "[ WARNING ]\n"
			<< "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
		return ;
	}

	void Harl::_error( void ) {
		std::cout << "[ ERROR ]\n"
			<< "This is unacceptable ! I want to speak to the manager now.\n" << std::endl;
		return ;
	}
