/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 16:48:26 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( float const f ) : pi( f ), qd( 42 ) { // j'initialise mon attribut pi a la valeur f
	
	std::cout << "Constructor called" << std::endl;

	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar( void ) const { //cette fonction membre ne modifiera jamais l instance courante de la classe
	
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	return;
}