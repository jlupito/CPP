/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/19 15:26:03 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <cmath>
#include "Animal.hpp"

class Dog : public Animal {
    
public:

	Dog( void );  // constructeur par defaut
	Dog( Dog const &copy ); // constructeur de recopie
	~Dog( void ); //destructeur
	
	Dog &operator=( const Dog &copy); // operateur d affectation

	virtual void makeSound( void ) const;
    
};

#endif