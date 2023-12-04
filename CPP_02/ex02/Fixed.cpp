/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/04 15:11:16 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed( void ) : _rawBits( 0 ) {
	}
	
	Fixed::Fixed( Fixed const &copy ) {
		*this = copy;
	}
	
	Fixed::Fixed( const int intValue ) {
		this->setRawBits(intValue << _bits);
	}
	
	Fixed::Fixed( const float floatValue ) {
		this->setRawBits(roundf(floatValue * (1 << _bits)));
	}

	Fixed::~Fixed( void ) {
	}
	
	float	Fixed::toFloat( void ) const {
		return ((float)this->_rawBits / (float)(1 << this->_bits));
	}
	
	int		Fixed::toInt( void ) const {
		return (this->_rawBits >> _bits);
	}

	Fixed &Fixed::operator=( const Fixed &copy ) {
		if (this != &copy)
			this->_rawBits = copy.getRawBits();
		return (*this);
	}
	
	Fixed Fixed::operator+( const Fixed &rhs ) const {
		Fixed	fixed(this->toFloat() + rhs.toFloat());
		return (fixed);
	}
	
	Fixed Fixed::operator-( const Fixed &rhs ) const {
		Fixed	fixed(this->toFloat() - rhs.toFloat());;
		return (fixed);
	}
	
	Fixed Fixed::operator*( const Fixed &rhs ) const {
		Fixed	fixed(this->toFloat() * rhs.toFloat());
		return (fixed);
	}
	
	Fixed Fixed::operator/( const Fixed &rhs) const {
		if (!rhs.getRawBits()) {
			std::cout << "Error - cannot divide by zero" << std::endl;
			return (*this);
		}
		Fixed	fixed(this->toFloat() / rhs.toFloat());
		return (fixed);
	}

	Fixed &Fixed::operator++( void ) {
		this->_rawBits++;
		return (*this);
	}
	
	Fixed &Fixed::operator--( void ) {
		this->_rawBits--;
		return (*this);
	}
	
	Fixed Fixed::operator++( int ) {
		Fixed tmp = *this;
		this->_rawBits++;
		return tmp;
	}
	
	Fixed Fixed::operator--( int ) {
		Fixed tmp = *this;
		this->_rawBits--;
		return tmp;
	}

	bool Fixed::operator>( const Fixed &rhs) const {
		if (this->_rawBits > rhs.getRawBits())
			return true;
		return false;
	}
	
	bool Fixed::operator<( const Fixed &rhs) const {
		if (this->_rawBits < rhs.getRawBits())
			return true;
		return false;
	}
	
	bool Fixed::operator<=( const Fixed &rhs) const {
		if (this->_rawBits <= rhs.getRawBits())
			return true;
		return false;
	}
	
	bool Fixed::operator>=( const Fixed &rhs) const {
		if (this->_rawBits >= rhs.getRawBits())
			return true;
		return false;
	}
	
	bool Fixed::operator==( const Fixed &rhs) const {
		if (this->_rawBits == rhs.getRawBits())
			return true;
		return false;
	}
	
	bool Fixed::operator!=( const Fixed &rhs) const {
		if (this->_rawBits != rhs.getRawBits())
			return true;
		return false;
	}

    int     Fixed::getRawBits( void ) const {
		return (this->_rawBits);
	}
	
    void    Fixed::setRawBits( int const raw ) {
		this->_rawBits = raw;
	}

	Fixed &Fixed::min( Fixed &a, Fixed &b ) {
		if (a.getRawBits() < b.getRawBits())
			return a;
		return b;
	}
	
	Fixed &Fixed::max( Fixed &a, Fixed &b ) {
		if (a.getRawBits() > b.getRawBits())
			return a;
		return b;
	}
	
	Fixed const &Fixed::min( Fixed const &a, Fixed const &b ) {
		if (a.getRawBits() < b.getRawBits())
			return a;
		return b;
	}
	
	Fixed const &Fixed::max( Fixed const &a, Fixed const &b ) {
		if (a.getRawBits() > b.getRawBits())
			return a;
		return b;
	}
	
	std::ostream &operator<<( std::ostream &streamOutput, Fixed const &fixedNbr ) {
		
		streamOutput << "The value is: " << fixedNbr.toFloat();
		return streamOutput;
	}
