/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:54:44 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/15 14:24:15 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
// #include "ICharacter.hpp"
// #include "IMateriaSource.hpp"

class ICharacter;

class AMateria {
	
	protected:
		std::string	_type;
		
	public:
		AMateria( void ); // constructeur par defaut
		AMateria(std::string const & type);
		AMateria( AMateria const &copy ); // constructeur de recopie
		virtual ~AMateria( void ); // destructeur
		AMateria &operator=( const AMateria &rhs); // operateur d affectation
		
		std::string const & getType() const; //Returns the materia type
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		
};

#endif
 