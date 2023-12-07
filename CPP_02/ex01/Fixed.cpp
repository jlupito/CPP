/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/07 11:18:45 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed( void ) : _rawBits( 0 ) {
		std::cout << "Default constructor called" << std::endl; 
	}
	
	Fixed::Fixed( Fixed const & copy ) {
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
	}
	
	Fixed::~Fixed( void ) {
		std::cout << "Destructor called" << std::endl;
	}
	
	Fixed::Fixed( const int intValue ) {
		std::cout << "Int constructor called" << std::endl;
		this->_rawBits = (intValue << Fixed::_bits);
	}
	
	Fixed::Fixed( const float floatValue ) {
		std::cout << "Float constructor called" << std::endl;
		this->_rawBits = roundf(floatValue * (1 << Fixed::_bits));
	}

	float	Fixed::toFloat( void ) const {
		return ((float)this->_rawBits / (float)(1 << Fixed::_bits));
	}
	
	int		Fixed::toInt( void ) const {
		return (this->_rawBits >> Fixed::_bits);
	}

	Fixed &Fixed::operator=( Fixed const &copy) {
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
	}

	std::ostream &operator<<( std::ostream &streamOutput, Fixed const &fixedNbr ) {
		streamOutput << "The value is: " << fixedNbr.toFloat();
		return streamOutput;
	}
