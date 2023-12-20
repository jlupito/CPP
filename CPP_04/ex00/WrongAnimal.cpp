/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/20 11:46:44 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "Random Animal" ) {
	std::cout << "Default WrongAnimal constructor is created." << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type ) {
	std::cout << "Default WrongAnimal constructor is created." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &copy ) {
	std::cout << "Copy WrongAnimal constructor is created." << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Default WrongAnimal destructor is called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &copy) {
	std::cout << "WrongAnimal assignment operator is called." << std::endl;
	if (this != &copy) {
		this->_type = copy.getType();
	}
	return (*this);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "If I knew who I were, I wouldn't be silent." << std::endl;
}

std::string     WrongAnimal::getType( void ) const {
	return (this->_type);
}