/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:37 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 14:15:36 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) {
	
	return;
}

Zombie::~Zombie( void ) {
	
    std::cout << "Zombie " << this->_name << " destroyed." << std::endl;
	return;
}

void	Zombie::announce() {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
	return;
}

void	Zombie::set_name( std::string name) {
	this->_name = name;
	return;
}