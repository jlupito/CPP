/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/04 14:32:30 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << b << std::endl;

if (a > b)
	std::cout << "oui" << std::endl;
else 
	std::cout << "non" << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;

return 0;
}