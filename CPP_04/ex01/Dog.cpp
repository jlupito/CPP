/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/08 15:41:35 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Default Dog constructor is created." << std::endl;
}

Dog::Dog( Dog const &copy ) {
	std::cout << "Copy Dog constructor is created." << std::endl;
	*this = copy;
}

Dog::~Dog( void ) {
	std::cout << "Default Dog destructor is called." << std::endl;
}

Dog &Dog::operator=( const Dog &copy) {
	std::cout << "Dog assignment operator is called." << std::endl;
	if (this != &copy) {
		this->_type = copy.getType();
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << this->getType() << " does: Wooooooof Wooooooooooooooooooooof" << std::endl;
}