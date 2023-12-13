/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:42:57 by jlupito           #+#    #+#             */
/*   Updated: 2023/12/13 22:01:25 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

	MateriaSource::MateriaSource( ) : _nbItems ( 0 ) {
		std::cout << "Default MateriaSource constructor is created." << std::endl;
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = NULL;
		}
	}
	
	MateriaSource::MateriaSource( MateriaSource const &copy ) {
		std::cout << "Copy MateriaSource destructor is created." << std::endl;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				this->_inventory[i] = (copy._inventory[i])->clone();
		}
	}
	
	MateriaSource::~MateriaSource( void ) {
		std::cout << "Default MateriaSource destructor is created." << std::endl;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
		}
	}
	
	MateriaSource &MateriaSource::operator=( const MateriaSource &rhs) {
		std::cout << "MateriaSource assignment operator is called." << std::endl;
		if (this != &rhs) {
			for (int i = 0; i < 4; i++) {
				if (rhs._inventory[i]) {
					this->_inventory[i] = (rhs._inventory[i])->clone();
					this->_nbItems++;
				}
			}
		}
		return (*this);
	}