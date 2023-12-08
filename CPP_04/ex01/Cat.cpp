/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/08 15:52:42 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Default Cat constructor is created." << std::endl;
}

Cat::Cat( Cat const &copy ) {
	std::cout << "Copy Cat constructor is created." << std::endl;
	*this = copy;
}

Cat::~Cat( void ) {
	std::cout << "Default Cat destructor is called." << std::endl;
}

Cat &Cat::operator=( const Cat &copy) {
	std::cout << "Cat assignment operator is called." << std::endl;
	if (this != &copy) {
		this->_type = copy.getType();
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << this->getType() << " does: Meeeeeeeeeeeeeoooowwwwwwwwwwwwwww" << std::endl;
}
