/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/07 17:12:45 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Default Animal constructor is created." << std::endl;
}

Animal::Animal( Animal const &copy ) {
	std::cout << "Copy Animal constructor is created." << std::endl;
	*this = copy;
}

Animal::~Animal( void ) {
	std::cout << "Default Animal destructor is called." << std::endl;
}

Animal &Animal::operator=( const Animal &copy) {
	std::cout << "Animal assignment operator is called." << std::endl;
	if (this != &copy) {
		this->setType(copy.getType());
	}
	return (*this);
}

void	Animal::makeSound( void ) const {
	if (this->type == "cat")
		std::cout << "Meeeeeeeeeeeeeoooowwwwwwwwwwwwwww" << std::endl;
	else if (this->type == "Dog")
		std::cout << "Wooooooof Wooooooooooooooooooooof" << std::endl;
	else
		std::cout << "If I knew who I were, I wouldn't be silent." << std::endl;
}

std::string     Animal::getType( void ) const {
	return (this->type);
}

void    Animal::setType( std::string type ) {
	this->_type = type;
}
