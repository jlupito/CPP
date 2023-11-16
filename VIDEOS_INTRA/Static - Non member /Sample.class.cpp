/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/13 11:29:46 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

// dans une fonction non-membre, on ne peut JAMAIS faire appel au pointeur this

Sample::Sample( void ) {
	
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;
	
	return;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	
	return;
}

int	Sample::getNbInst( void ) {
	
	return Sample::_nbInst;
}

// ligne qui permet d initialiser l attribut non membre

int	Sample::_nbInst = 0;
