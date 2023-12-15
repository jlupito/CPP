/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:42:57 by jlupito           #+#    #+#             */
/*   Updated: 2023/12/15 08:42:33 by jlupito          ###   ########.fr       */
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

    void 		MateriaSource::learnMateria(AMateria* m) {
		int i = 0;
		if (!m) {
			std::cout << "There is no Materia to learn." << std::endl;
			return ;
		}
		while (this->_inventory[i] && i < 4) {
			if (this->_inventory[i]->getType() == m->getType()) {
				std::cout << "This materia has already been learnt." << std::endl;
				delete m;
				return ;
			}
			i++;
		}
		if (i >= 4 || this->_nbItems == 4) {
			std::cout << "Inventory is full, drop one materia first." << std::endl;
			return ;
		}
		else {
			_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " has been added at position #" << i - 1 << " in inventory." << std::endl;
			this->_nbItems++;
		}
	}
	
	AMateria* 	MateriaSource::createMateria(std::string const &type) {
		if (!this->_inventory == 0)
        {
            std::cout << "There is not materia." << std::endl;
            return 0;
        }
        for (int i = 0; i < this->_NbItems && i < 4; i++)
        {
            if (this->_inventory[i]->getType() == type)
            {
                std::cout << "Materia " << type << " has been added at position #" << i - 1 << " in inventory." << std::endl;
                return this->_inventory[i]->clone();
            }
        }
        return 0;
	}