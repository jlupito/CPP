/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:41:10 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/12 14:23:42 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
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