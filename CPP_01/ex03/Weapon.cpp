/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:24:30 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/21 13:36:19 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string weaponType ) {
	this->setType(weaponType);
	return;
}

Weapon::~Weapon( void ) {
	return;
}

std::string const &	Weapon::getType() {
	
	return this->_type;
}

void	Weapon::setType( std::string weaponType) {
	
	this->_type = weaponType;
	return;
}