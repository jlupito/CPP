/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 18:06:39 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( int v ) : _foo( v ) {
	
	std::cout << "Constructor called" << std::endl;;
	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo( void ) const {
	
	return this->_foo;
}

int	Sample::compare( Sample * other ) const {
	
	if (this->_foo < other->getFoo() )
		return -1;
	else if ( this->_foo > other->getFoo() )
		return 1;
	return 0;
}