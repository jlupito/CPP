/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/19 15:33:04 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animal" ){
	std::cout << "Default Animal constructor is created." << std::endl;
}

Animal::Animal( std::string type ) : _type( type ) {
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
		this->_type = copy.getType();
	}
	return (*this);
}

void	Animal::makeSound( void ) const {
	std::cout << "If I knew who I were, I wouldn't be silent." << std::endl;
}

std::string     Animal::getType( void ) const {
	return (this->_type);
}
