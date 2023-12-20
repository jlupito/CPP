/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/20 11:45:51 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	std::cout << "Default WrongCat constructor is created." << std::endl;
}

WrongCat::WrongCat( WrongCat const &copy ) : WrongAnimal() {
	std::cout << "Copy WrongCat constructor is created." << std::endl;
	*this = copy;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Default WrongCat destructor is called." << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &copy) {
	std::cout << "WrongCat assignment operator is called." << std::endl;
	if (this != &copy) {
		this->_type = copy.getType();
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << this->getType() << " does: Meeeeeeeeeeeeeoooowwwwwwwwwwwwwww" << std::endl;
}