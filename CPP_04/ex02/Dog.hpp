/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/12 10:35:41 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    
public:

	Dog( void );  // constructeur par defaut
	Dog( Dog const &copy ); // constructeur de recopie
	~Dog( void ); //destructeur
	
	Dog &operator=( const Dog &copy); // operateur d affectation

	void makeSound( void ) const;
	Brain* getBrain() const;

private:

	Brain*	_brain;
    
};

#endif