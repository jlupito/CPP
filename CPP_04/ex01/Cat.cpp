/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/09 11:53:35 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Default Cat constructor is created." << std::endl;
	this->_brain = new Brain;
}

Cat::Cat( Cat const &copy ) {
	std::cout << "Copy Cat constructor is created." << std::endl;
	this->_brain = new Brain(*copy.getBrain());
}

Cat::~Cat( void ) {
	std::cout << "Default Cat destructor is called." << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=( const Cat &copy) {
	std::cout << "Cat assignment operator is called." << std::endl;
	if (this != &copy) {
		this->_type = copy.getType();
		this->_brain = new Brain(*copy.getBrain());
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << this->getType() << " does: Meeeeeeeeeeeeeoooowwwwwwwwwwwwwww" << std::endl;
}

Brain Cat::*getBrain( void ) {
	return (this->_brain);
}
