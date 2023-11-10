/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 16:22:25 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

// ds la classe Sample je veux acceer a la fonction Sample ou ~Sample
// les de/constructeurs n ont pas de type de retour
// le constructeur est execute a l instanciation de la classe

Sample1::Sample1( char p1, int p2, float p3 ) {
	
	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->foo: " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->foo: " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->foo: " << this->a3 << std::endl;
	
	return;
}

Sample1::~Sample1( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}