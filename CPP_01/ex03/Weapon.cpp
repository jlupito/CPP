/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:24:30 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 16:57:19 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( void ) {
	return;
}

Weapon::~Weapon( void ) {
	return;
}

std::string const &	Weapon::getType() const {
	
	return std::string const & typeREF =  this->_type;
}

void	Weapon::setType( std::string type) {
	
	this->_type = type;
	return;
}