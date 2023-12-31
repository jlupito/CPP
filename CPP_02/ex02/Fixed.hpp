/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/04 13:40:19 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    
public:

	Fixed( void );  // constructeur par defaut
	Fixed( Fixed const &copy ); // constructeur de recopie
	~Fixed( void ); //destructeur
	Fixed( const int intValue );
	Fixed( const float floatValue );
	
	Fixed &operator=( const Fixed &copy);
	Fixed operator+( const Fixed &rhs) const;
	Fixed operator-( const Fixed &rhs) const;
	Fixed operator*( const Fixed &rhs) const;
	Fixed operator/( const Fixed &rhs) const;
	
	Fixed &operator++( void );
	Fixed &operator--( void );
	Fixed operator++( int );
	Fixed operator--( int );
	
	bool operator>( const Fixed &rhs) const;
	bool operator<( const Fixed &rhs) const;
	bool operator<=( const Fixed &rhs) const;
	bool operator>=( const Fixed &rhs) const;
	bool operator==( const Fixed &rhs) const;
	bool operator!=( const Fixed &rhs) const;
	
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
	static Fixed &min( Fixed &a, Fixed &b);
	static Fixed &max( Fixed &a, Fixed &b);
	static Fixed const &min( Fixed const &a, Fixed const &b);
	static Fixed const &max( Fixed const &a, Fixed const &b);
    
private:

    int             	_rawBits;
    static int	const   _bits = 8;
    
};

std::ostream &operator<<( std::ostream &streamOutput, Fixed const &fixedNbr );

#endif