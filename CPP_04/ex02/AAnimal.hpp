/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/11 16:51:27 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal {
    
public:

	AAnimal( void );  // constructeur par defaut
	AAnimal( std::string type );
	AAnimal( AAnimal const &copy ); // constructeur de recopie
	virtual ~AAnimal( void ); //destructeur
	
	AAnimal &operator=( const AAnimal &copy); // operateur d affectation

	virtual void 			makeSound( void ) const = 0;
	virtual std::string 	getType( void ) const = 0;
    
protected:

    std::string     _type;
    
};

#endif