/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/25 11:03:41 by jlupito          ###   ########.fr       */
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
		std::string complainType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		void(Harl::*harlFunctionPtr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
		
		for (int i = 0; i < 4; i++) {
			if (level == complainType[i]) {
				(this->*harlFunctionPtr[i])();
			}
			else {
				std::cout << "Harl only complains with a valid LEVEL entry." << std::endl;
				return ;
			}
		}
		return ;
	}

	void Harl::_debug( void ) {
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
		return ;
	}

	void Harl::_info( void ) {
		std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
		return ;
	}

	void Harl::_warning( void ) {
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
		return ;
	}

	void Harl::_error( void ) {
		std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
		return ;
	}
