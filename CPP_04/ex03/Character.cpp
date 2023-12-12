/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:36:14 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/12 17:10:35 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

	Character::Character( std::string name ) : _name( name ) {
		std::cout << "Default Character constructor is created." << std::endl;
		for (int i; i < 4; i++) {
			_inventory[i] = NULL;
		}
	}
	
	Character::Character( Character const &copy ) {
		std::cout << "Copy Character destructor is created." << std::endl;
		for (int i; i < 4; i++) {
			_inventory[i] = (copy._inventory[i])->clone();
		}
	}
	
	Character::~Character( void ) {
		std::cout << "Default Character destructor is created." << std::endl;
		for (int i; i < 4; i++) {
			delete _inventory[i];
		}
	}
	
	Character &Character::operator=( const Character &rhs) {
		if (this != &rhs) {
			this->_name = rhs.getName();
			for (int i; i < 4; i++) {
				_inventory[i] = (rhs._inventory[i])->clone();
			}
		}
		return (*this);
	}
	
	std::string const &Character::getName() const {
		
	}

	void Character::equip(AMateria* m) {

	}				

	void Character::unequip(int idx) {
		
	}

	void Character::use(int idx, ICharacter& target) {
		
	}