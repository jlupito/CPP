/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/28 16:31:17 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {
	
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar( char const c ) const {
	
	std::cout << "Member function called with char overload: " << c << std::endl;
	return;
}

void	Sample::bar( int const n ) const {

	std::cout << "Member function called with int overload: " << n << std::endl;
	return;
}

void	Sample::bar( float const z ) const {
	
	std::cout << "Member function called with float overload: " << z << std::endl;
	return;
}

void	Sample::bar( Sample const & i ) const {

	(void) i;
	std::cout << "Member function called with Sample class overload" << std::endl;
	return;
}
