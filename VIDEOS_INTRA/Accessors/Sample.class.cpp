/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/13 14:42:15 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {
	
	std::cout << "Constructor called" << std::endl;

	this->setFoo( 0 );
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo( void ) const {
	
	return this->_foo;
}

void	Sample::setFoo( int v ) {
	
	if (v >= 0)
		this->_foo = v;	
	return;
}