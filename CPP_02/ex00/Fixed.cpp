/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/30 16:43:53 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed( void ) : _value( 0 ) {
		
		std::cout << "Default constructor called" << std::endl; 
		return;
	}
	
	Fixed::Fixed( Fixed const & copy ) {
		
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
		return;
	}
	
	Fixed::~Fixed( void ) {
		
		std::cout << "Destructor called" << std::endl;
		return ;
	}
	
	Fixed &	Fixed::operator=( Fixed const & copy) {
		
		std::cout << "Copy assignment operator called" <<std::endl;

		if (this != &copy)
			this->_value = copy.getRawBits();

		return *this;
	}

    int     Fixed::getRawBits( void ) const {
		
		std::cout << "getRawBits member function called" <<std::endl;
		return (this->_value);
	}
	
    void    Fixed::setRawBits( int const raw ) {
		
		this->_value = raw;
		return;
	}
