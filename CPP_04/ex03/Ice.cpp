/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:41:10 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/15 16:28:36 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

# define _GREY 	"\033[90m"
# define _END "\1\033[0m\2"

Ice::Ice( void ) : AMateria() {
	std::cout << _GREY "Default Ice constructor is called." _END << std::endl;
	this->_type = "ice";
}

Ice::Ice( Ice const &copy ) : AMateria() {
	std::cout << _GREY "Copy Ice constructor is called." _END << std::endl;
	*this = copy;
}

Ice::~Ice( void ) {
	std::cout << _GREY "Default Ice destructor is called." _END << std::endl;
}

Ice &Ice::operator=( const Ice &rhs) {
		std::cout << _GREY "Ice assignment operator is called." _END << std::endl;
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