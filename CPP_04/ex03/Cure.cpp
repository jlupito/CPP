/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:41:10 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/15 16:28:17 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

# define _GREY 	"\033[90m"
# define _END "\1\033[0m\2"

Cure::Cure( void ) : AMateria() {
	std::cout << _GREY "Default Cure constructor is called." _END << std::endl;
	this->_type = "cure";
}

Cure::Cure( Cure const &copy ) : AMateria() {
	std::cout << _GREY "Copy Cure constructor is called." _END << std::endl;
	*this = copy;
}

Cure::~Cure( void ) {
	std::cout << _GREY "Default Cure destructor is called." _END << std::endl;
}

Cure &Cure::operator=( const Cure &rhs) {
		std::cout << _GREY "Cure assignment operator is called." _END << std::endl;
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