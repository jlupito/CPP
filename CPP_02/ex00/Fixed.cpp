/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/01 10:48:00 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed( void ) : _rawBits( 0 ) {
		
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
			this->_rawBits = copy.getRawBits();

		return *this;
	}

    int     Fixed::getRawBits( void ) const {
		
		std::cout << "getRawBits member function called" <<std::endl;
		return (this->_rawBits);
	}
	
    void    Fixed::setRawBits( int const raw ) {
		
		this->_rawBits = raw;
		return;
	}
