/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/30 17:41:40 by jarthaud         ###   ########.fr       */
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
	Fixed &operator=( Fixed const &copy); // surcharge operateur d assignation

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

	Fixed( const int intValue );
	Fixed( const int floatValue );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
    
private:

    int             	_value;
    static int	const   _bits = 8;
    
};

std::ostream &operator<<( std::ostream &streamOutput, Fixed const &fixedNbr );

#endif