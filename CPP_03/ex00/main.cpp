/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/04 18:07:41 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	
	ClapTrap	riri("Riri");
	ClapTrap	fifi("Fifi");
	ClapTrap	loulou("Loulou");
	
	std::cout << "<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		riri.attack("Fifi");
		fifi.takeDamage(2);
		loulou.beRepaired(3);
		std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	}

	return 0;
}