/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 17:11:31 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

// ds la classe Sample je veux acceer a la fonction Sample ou ~Sample
// les de/constructeurs n ont pas de type de retour
// le constructeur est execute a l instanciation de la classe
// La class est privee par defaut, la structure est public par defaut

Sample::Sample( void ) {
	
	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();
	
	return;
}

Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar( void ){ //par defaut cpp passe un parametre: un pointeur sur linstance courante
	
	std::cout << "Member function bar called" << std::endl;
	return;
}