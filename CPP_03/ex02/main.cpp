/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/07 15:47:40 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	
	ClapTrap	riri("Riri");
	ScavTrap	fifi("Fifi");
	FragTrap	loulou("Loulou");
	
	std::cout << "<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	riri.attack("Fifi");
	fifi.takeDamage(riri.getAttackPts());
	fifi.attack("Loulou");
	loulou.takeDamage(fifi.getAttackPts());
	loulou.attack("Riri");
	riri.takeDamage(loulou.getAttackPts());
	std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	fifi.guardGate();
	loulou.highFivesGuys();
	std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;

	return 0;
}