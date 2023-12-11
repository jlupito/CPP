/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/11 16:51:56 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) {
	std::cout << "Default AAnimal constructor is created." << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type( type ) {
	std::cout << "Default AAnimal constructor is created." << std::endl;
}

AAnimal::AAnimal( AAnimal const &copy ) {
	std::cout << "Copy AAnimal constructor is created." << std::endl;
	*this = copy;
}

AAnimal::~AAnimal( void ) {
	std::cout << "Default AAnimal destructor is called." << std::endl;
}

AAnimal &AAnimal::operator=( const AAnimal &copy) {
	std::cout << "AAnimal assignment operator is called." << std::endl;
	if (this != &copy) {
		this->_type = copy.getType();
	}
	return (*this);
}

void	AAnimal::makeSound( void ) const {
	std::cout << "If I knew who I were, I wouldn't be silent." << std::endl;
}

std::string     AAnimal::getType( void ) const {
	return (this->_type);
}
