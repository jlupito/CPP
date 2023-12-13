/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:36:29 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/13 19:18:08 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

class AMateria;
class MateriaSource;

class Character : public ICharacter {
	
	private:
		AMateria*		_inventory[4];
		int				_nbItems;
		std::string 	_name;
		
	public:
		Character( std::string name ); // constructeur par defaut
		Character( Character const &copy ); // constructeur de recopie
		virtual ~Character( void ); // destructeur
		Character &operator=( const Character &rhs); // operateur d affectation
		
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		
}; 

#endif