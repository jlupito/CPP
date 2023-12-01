/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/01 11:59:11 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	Fixed::Fixed( void ) : _rawBits( 0 ) {
		std::cout << "Default constructor called" << std::endl; 
		return;
	}
	
	Fixed::Fixed( Fixed const &copy ) {
		std::cout << "Copy constructor called" << std::endl;
		*this = copy;
		return;
	}
	
	Fixed::~Fixed( void ) {
		std::cout << "Destructor called" << std::endl;
		return ;
	}
	
	Fixed::Fixed( const int intValue ) {
		std::cout << "Int constructor called" << std::endl;
		this->_rawBits = (intValue << Fixed::_bits);
		return ;
	}
	
	Fixed::Fixed( const float floatValue ) {
		std::cout << "Float constructor called" << std::endl;
		this->_rawBits = floatValue * (1 << Fixed::_bits);
		return ;
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
	
	Fixed Fixed::operator+( Fixed const &rhs) const {
		this->_rawBits += rhs.getRawbits();
		return *this;
	}
	
	Fixed operator-( Fixed const &rhs) const {
		this->_rawBits -= rhs.getRawbits();
		return *this;
	}
	
	Fixed operator*( Fixed const &rhs) const {
		this->_rawBits *= rhs.getRawbits();
		return *this;
	}
	
	Fixed operator/( Fixed const &rhs) const {
		// ATTENTION PROTEGER UND DIVISE PAR ZERO
		this->_rawBits /= rhs.getRawbits();
		return *this;
	}

	Fixed operator++( void ) {
		this->_rawBits++;
		return *this;
	}
	
	Fixed operator--( void ) {
		this->_rawBits--;
		return *this;
	}
	
	Fixed operator++( int ) {
		
	}
	
	Fixed operator--( int ) {
		
	}

	bool operator>( Fixed const &rhs) const {
		if (this->_rawBits > rhs.getRawBits())
			return true;
		return false;
	}
	
	bool operator<( Fixed const &rhs) const {
		if (this->_rawBits < rhs.getRawBits())
			return true;
		return false;
	}
	
	bool operator<=( Fixed const &rhs) const {
		if (this->_rawBits <= rhs.getRawBits())
			return true;
		return false;
	}
	
	bool operator>=( Fixed const &rhs) const {
		if (this->_rawBits >= rhs.getRawBits())
			return true;
		return false;
	}
	
	bool operator==( Fixed const &rhs) const {
		if (this->_rawBits == rhs.getRawBits())
			return true;
		return false;
	}
	
	bool operator!=( Fixed const &rhs) const {
		if (this->_rawBits != rhs.getRawBits())
			return true;
		return false;
	}

    int     Fixed::getRawBits( void ) const {
		std::cout << "getRawBits member function called" <<std::endl;
		return (this->_rawBits);
	}
	
    void    Fixed::setRawBits( int const raw ) {
		this->_rawBits = raw;
		return;
	}

	static Fixed &min( Fixed &a, Fixed &b) {
		if (a.getRawBits() < b.getRawBits())
			return a;
		return b;
	}
	
	static Fixed &max( Fixed &a, Fixed &b) {
		if (a.getRawBits() > b.getRawBits())
			return a;
		return b;
	}
	
	static Fixed const &min( Fixed const &a, Fixed const &b) {
		if (a.getRawBits() < b.getRawBits())
			return a;
		return b;
	}
	
	static Fixed const &max( Fixed const &a, Fixed const &b) {
		if (a.getRawBits() > b.getRawBits())
			return a;
		return b;
	}
	
	std::ostream &operator<<( std::ostream &streamOutput, Fixed const &fixedNbr ) {
		
		streamOutput << "The value is: " << fixedNbr.toFloat();
		return streamOutput;
	}
