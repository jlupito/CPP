/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:40:51 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/15 11:30:31 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
// #include "IMateriaSource.hpp"

// class ICharacter;
class AMateria;

class Cure : public AMateria {

	public:
		Cure( void ); // constructeur par defaut
		Cure( Cure const &copy ); // constructeur de recopie
		~Cure( void ); // destructeur
		Cure &operator=( const Cure &rhs); // operateur d affectation

		virtual AMateria*	clone( void ) const;
		virtual void 		use(ICharacter& target);
		
};

#endif