/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/20 11:47:41 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <cmath>

class WrongAnimal {

	public:

		WrongAnimal( void );  // constructeur par defaut
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const &copy ); // constructeur de recopie
		virtual ~WrongAnimal( void ); //destructeur
		
		WrongAnimal &operator=( const WrongAnimal &copy); // operateur d affectation

		void 			makeSound( void ) const;
		std::string 	getType( void ) const;
		
	protected:

		std::string     _type;
	
};

#endif