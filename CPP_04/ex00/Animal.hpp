/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/07 18:19:27 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <cmath>

class Animal {
    
public:

	Animal( void );  // constructeur par defaut
	Animal( Animal const &copy ); // constructeur de recopie
	~Animal( void ); //destructeur
	
	Animal &operator=( const Animal &copy); // operateur d affectation

	virtual void 		makeSound( void ) const = 0;
	virtual void 		setType( void ) const = 0;
    
protected:

    std::string     _type;
    
};

#endif