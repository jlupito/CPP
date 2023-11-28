/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/28 14:21:20 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) : _name(name) {
	return;
}

HumanB::~HumanB( void ) {
	return;
}

void HumanB::attack( void ) {
	if (!(this->_weapon))
		std::cout << this->_name << " attacks with their hands" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << (*this->_weapon).getType() << std::endl;
	return;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	return;
}