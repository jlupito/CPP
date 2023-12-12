/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:41:10 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/12 14:23:27 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure( void ) : AMateria() {
	std::cout << "Default Cure constructor is created." << std::endl;
}

Cure::Cure( Cure const &copy ) : AMateria() {
	std::cout << "Copy Cure constructor is created." << std::endl;
	*this = copy;
}

Cure::~Cure( void ) {
	std::cout << "Default Cure destructor is created." << std::endl;
}

Cure &Cure::operator=( const Cure &rhs) {
		std::cout << "Cure assignment operator is called." << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

AMateria*	Cure::clone( void ) const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}