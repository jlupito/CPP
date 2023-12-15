/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:55:00 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/15 14:25:12 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

# define _GREY 	"\033[90m"
# define _END "\1\033[0m\2"

AMateria::AMateria( void ) {
	std::cout << _GREY "Default AMateria constructor is called." _END << std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << _GREY "Default AMateria constructor is called." _END << std::endl;
	this->_type = type;
}

AMateria::AMateria( AMateria const &copy ) {
	std::cout << _GREY "Copy AMateria constructor is called." _END << std::endl;
	*this = copy;
}

AMateria::~AMateria( void ) {
	std::cout << _GREY "Default AMateria destructor is called." _END << std::endl;
}

AMateria &AMateria::operator=( const AMateria &rhs) {
	std::cout << _GREY "AMateria assignment operator is called." _END << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}
		
std::string const &AMateria::getType() const {
	return (this->_type);
}
		
// void AMateria::use(ICharacter& target) {
// 	std::cout << this->_type << " is used for " << target.getName() << std::endl;
// }