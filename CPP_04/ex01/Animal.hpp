/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/09 11:53:44 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
    
public:

	Animal( void );  // constructeur par defaut
	Animal( std::string type );
	Animal( Animal const &copy ); // constructeur de recopie
	virtual ~Animal( void ); //destructeur
	
	Animal &operator=( const Animal &copy); // operateur d affectation

	virtual void 			makeSound( void ) const;
	virtual std::string 	getType( void ) const;
    
protected:

    std::string     _type;
    
};

#endif