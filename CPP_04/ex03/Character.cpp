/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:36:14 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/15 16:49:56 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

# define _GREY 	"\033[90m"
# define _END "\1\033[0m\2"

	Character::Character( std::string name ) : _name( name ), _nbItems ( 0 ) {
		std::cout << _GREY "Default Character constructor is called." _END << std::endl;
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = NULL;
		}
	}
	
	Character::Character( Character const &copy ) {
		std::cout << _GREY "Copy Character destructor is called." _END << std::endl;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				this->_inventory[i] = (copy._inventory[i])->clone();
		}
	}
	
	Character::~Character( void ) {
		std::cout << _GREY "Default Character destructor is called." _END << std::endl;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
		}
	}
	
	Character &Character::operator=( const Character &rhs) {
		std::cout << _GREY "Character assignment operator is called." _END << std::endl;
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
		std::cout << this->getName() << " has placed the item " << m->getType()
				<< " at position #" << i << std::endl;
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
		std::cout << this->getName() << " has dropped the item " << this->_inventory[idx]->getType()
				<< " which was at position #" << idx << std::endl;
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
		this->_nbItems--;
	}

	void Character::use(int idx, ICharacter& target) {
		if (idx < 0 || idx > 3 || (this->_inventory[idx]) == NULL) {
			std::cout << "Cannot use any materia." << std::endl;
			return ;
		}
		this->_inventory[idx]->use(target);
		this->unequip(idx);
	}