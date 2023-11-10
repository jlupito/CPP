/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 16:25:50 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

// ds la classe Sample je veux acceer a la fonction Sample ou ~Sample
// les de/constructeurs n ont pas de type de retour
// le constructeur est execute a l instanciation de la classe

Sample2::Sample2( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {
	
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->foo: " << this->a1 << std::endl;
	std::cout << "this->foo: " << this->a2 << std::endl;
	std::cout << "this->foo: " << this->a3 << std::endl;
	
	return;
}

Sample2::~Sample2( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}