/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:41:10 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/13 19:30:02 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria() {
	std::cout << "Default Ice constructor is created." << std::endl;
}

Ice::Ice( Ice const &copy ) : AMateria() {
	std::cout << "Copy Ice constructor is created." << std::endl;
	*this = copy;
}

Ice::~Ice( void ) {
	std::cout << "Default Ice destructor is created." << std::endl;
}

Ice &Ice::operator=( const Ice &rhs) {
		std::cout << "Ice assignment operator is called." << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

AMateria*	Ice::clone( void ) const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}