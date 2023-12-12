/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:55:00 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/12 16:43:26 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) {
	std::cout << "Default AMateria constructor is created." << std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "Default AMateria constructor is created." << std::endl;
	this->_type = type;
}

AMateria::AMateria( AMateria const &copy ) {
	std::cout << "Copy AMateria constructor is created." << std::endl;
	*this = copy;
}

AMateria::~AMateria( void ) {
	std::cout << "Default AMateria destructor is created." << std::endl;
}

AMateria &AMateria::operator=( const AMateria &rhs) {
	std::cout << "AMateria assignment operator is called." << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}
		
std::string const &AMateria::getType() const {
	return (this->_type);
}
		
void AMateria::use(ICharacter& target) {
	std::cout << this->_type << " is used for " << target.getName() << std::endl;
}