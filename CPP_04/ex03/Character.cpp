/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:36:14 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/14 12:08:03 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

	Character::Character( std::string name ) : _name( name ), _nbItems ( 0 ) {
		std::cout << "Default Character constructor is created." << std::endl;
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = NULL;
		}
	}
	
	Character::Character( Character const &copy ) {
		std::cout << "Copy Character destructor is created." << std::endl;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				this->_inventory[i] = (copy._inventory[i])->clone();
		}
	}
	
	Character::~Character( void ) {
		std::cout << "Default Character destructor is created." << std::endl;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
		}
	}
	
	Character &Character::operator=( const Character &rhs) {
		std::cout << "Character assignment operator is called." << std::endl;
		if (this != &rhs) {
			this->_name = rhs.getName();
			for (int i = 0; i < 4; i++) {
				if (rhs._inventory[i]) {
					this->_inventory[i] = (rhs._inventory[i])->clone();
					this->_nbItems++;
				}
			}
		}
		return (*this);
	}
	
	std::string const &Character::getName() const {
		return this->_name;
	}

	void Character::equip(AMateria* m) {
		int i = 0;
		if (!m) {
			std::cout << "Nothing to pick up." << std::endl;
			return ;
		}
		if (this->_nbItems == 0)
			this->_inventory[0] = m->clone();
		else if (this->_nbItems < 4) {
			while (i < 4 && this->_inventory[i])
				i++;
			this->_inventory[i] = m->clone();
		}
		else {
			std::cout << "Inventory is full, drop one item first." << std::endl;
			return ;
		}
		std::cout << "Item " << this->getName() << " is now placed at index " << i - 1 << " in inventory." << std::endl;
		this->_nbItems++;
	}				

	void Character::unequip(int idx) {
		if (idx < 0 || idx >= 4) {
			std::cout << "Index is not valid." << std::endl;
			return ;
		}
		if (this->_nbItems == 0 || !(this->_inventory[idx])) {
			std::cout << "No item found at this place in inventory." << std::endl;
			return ;
		}
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
		this->_nbItems--;
		std::cout << "Item " << this->getName() << " has been dropped and place #" << idx << " is now free in inventory." << std::endl;
	}

	void Character::use(int idx, ICharacter& target) {
		if (idx < 0 || idx > 3 || !(this->_inventory[idx])) {
			std::cout << "Cannot use any materia." << std::endl;
			return ;
		}
		this->_inventory[idx]->use(target);
		this->unequip(idx);
	}