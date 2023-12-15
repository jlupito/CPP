/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:40:51 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/15 11:31:01 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
// #include "IMateriaSource.hpp"

// class ICharacter;
// class AMateria;

class Ice : public AMateria {

	public:
		Ice( void ); // constructeur par defaut
		Ice( Ice const &copy ); // constructeur de recopie
		~Ice( void ); // destructeur
		Ice &operator=( const Ice &rhs); // operateur d affectation

		virtual AMateria*	clone( void ) const;
		void 		use(ICharacter& target);
		
};

#endif