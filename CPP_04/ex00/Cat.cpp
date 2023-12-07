/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/07 17:13:01 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat( void ) : _type("Cat") {
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
		this->setType(copy.getType());
	}
	return (*this);
}
