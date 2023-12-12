/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:40:51 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/12 16:44:41 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

	public:
		Cure( void ); // constructeur par defaut
		Cure( Cure const &copy ); // constructeur de recopie
		virtual ~Cure( void ); // destructeur
		Cure &operator=( const Cure &rhs); // operateur d affectation

		virtual AMateria*	clone( void ) const;
		virtual void 		use(ICharacter&);
		
};

#endif