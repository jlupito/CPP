/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/01 10:47:27 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    
public:

	Fixed( void );  // constructeur par defaut
	Fixed( Fixed const &copy ); // constructeur de recopie
	~Fixed( void ); //destructeur
	Fixed &	operator=( Fixed const &copy); // surcharge operateur d assignation

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    
private:

    int             	_rawBits;
    static int  const   _bits = 8;
    
};


#endif