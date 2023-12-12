/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/12 12:17:49 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
Fixed a;
std::cout << a << std::endl;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << b << std::endl;
Fixed const c( Fixed( 5.05f ) / Fixed( 2 ) );
std::cout << c << std::endl;
Fixed const d( Fixed( 5.05f ) + Fixed( 2 ) );
std::cout << d << std::endl;
Fixed const e( Fixed( 5.05f ) - Fixed( 2 ) );
std::cout << e << std::endl;

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << b << std::endl;

if (a > b)
	std::cout << "oui a superieur a b" << std::endl;
else 
	std::cout << "non a pas superieur a b" << std::endl;

if (a <= b)
	std::cout << "oui a inferieur ou egal a b" << std::endl;
else 
	std::cout << "non a pas inferieur a b" << std::endl;

if (a != b)
	std::cout << "oui a different de b" << std::endl;
else 
	std::cout << "non a egal a b" << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;

return 0;
}