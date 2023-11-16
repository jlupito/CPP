/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:37 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/16 14:29:04 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ) : _name(name) {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
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