/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/21 14:00:09 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {
	return;
}

HumanA::~HumanA( void ) {
	return;
}

void HumanA::attack( void ) {
	
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return;
}
