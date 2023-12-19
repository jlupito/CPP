/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/19 15:45:19 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <cmath>

class WrongCat : public WrongAnimal {
    
public:

	WrongCat( void );  // constructeur par defaut
	WrongCat( WrongCat const &copy ); // constructeur de recopie
	~WrongCat( void ); //destructeur
	
	WrongCat &operator=( const WrongCat &copy); // operateur d affectation

	void 	makeSound( void ) const;
    
};

#endif