/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 16:43:53 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB( void ) {
	return;
}

HumanB::~HumanB( void ) {
	return;
}

HumanB::attack() {
	
	std::cout << this->_name << " attacks with their " << this->_weaponType << std::endl;
	return;
}