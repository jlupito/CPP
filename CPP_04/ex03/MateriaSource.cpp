/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:42:57 by jlupito           #+#    #+#             */
/*   Updated: 2023/12/18 10:38:14 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
# define _GREY 	"\033[90m"
# define _END "\1\033[0m\2"

	MateriaSource::MateriaSource( ) : _nbItems ( 0 ) {
		std::cout << _GREY "Default MateriaSource constructor is called." _END << std::endl;
		for (int i = 0; i < 4; i++) {
			this->_inventory[i] = NULL;
		}
	}
	
	MateriaSource::MateriaSource( MateriaSource const &copy ) {
		std::cout << _GREY "Copy MateriaSource destructor is called." _END << std::endl;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				this->_inventory[i] = (copy._inventory[i])->clone();
		}
	}
	
	MateriaSource::~MateriaSource( void ) {
		std::cout << _GREY "Default MateriaSource destructor is called." _END << std::endl;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
		}
	}
	
	MateriaSource &MateriaSource::operator=( const MateriaSource &rhs) {
		std::cout << _GREY "MateriaSource assignment operator is called." _END << std::endl;
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
			std::cout << "Memory book is full, forget one first." << std::endl;
			return ;
		}
		else {
			_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " has been learnt in memory book." << std::endl;
			this->_nbItems++;
		}
	}
	
	AMateria* 	MateriaSource::createMateria(std::string const &type) {
		if (!this->_inventory[0])
        {
            std::cout << "There is not materia." << std::endl;
            return 0;
        }
        for (int i = 0; i < this->_nbItems && i < 4; i++)
        {
            if (this->_inventory[i]->getType() == type)
            {
                std::cout << "Materia " << type << " has been created from memory book." << std::endl;
                return this->_inventory[i]->clone();
            }
        }
        return 0;
	}