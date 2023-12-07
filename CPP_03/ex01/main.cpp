/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/07 15:14:40 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
	
	ClapTrap	riri("Riri");
	ScavTrap	fifi("Fifi");
	ClapTrap	loulou(ScavTrap("Loulou"));
	
	std::cout << "<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		if (i == 4)
			fifi.guardGate();
		else
		{
			fifi.attack("Riri");
			riri.takeDamage(fifi.getAttackPts());
		}
		if (i % 2)
			riri.beRepaired(0);
		else
		{
			riri.attack("Fifi");
			fifi.takeDamage(riri.getAttackPts());
		}
		std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	}
	loulou.attack("Fifi");
	fifi.takeDamage(loulou.getAttackPts());
	return 0;
}