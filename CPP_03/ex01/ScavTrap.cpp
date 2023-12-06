/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:16:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/06 17:58:05 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void) : 
			_name("Default ScavTrap"), _hitPts(100), _energyPts(50), _attackPts(20) {
	std::cout << this->_name << " is created." << std::endl;
}

ScavTrap::ScavTrap( std::string name) : 
			_name(name), _hitPts(100), _energyPts(50), _attackPts(20) {
	std::cout << "Default ScavTrap " << this->getName() << " is created." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavTrap ) : ClapTrap(scavTrap._name) {
	std::cout << "Copy ScavTrap " << scavTrap._name << " is created." << std::endl;
	this->_name = scavTrap.getName();
	this->setHitPts(scavTrap.getHitPts());
	this->setEnergyPts(scavTrap.getEnergyPts());
	this->setAttackPts(scavTrap.getAttackPts());
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Default ScavTrap " << this->getName() << " is destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &copy) {
	std::cout << "Called assignment operator." << std::endl;
	if (this != &copy) {
		this->_name = copy.getName();
		this->setHitPts(copy.getHitPts());
		this->setEnergyPts(copy.getEnergyPts());
		this->setAttackPts(copy.getAttackPts());
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (this->getHitPts() > 0) {
		this->_energyPts--;
		std::cout << "ScavTrap " << this->getName() << " attacks " << target 
		<< ", causing " << this->getAttackPts() << " points of Damage!" << std::endl;
	}
	if (this->getHitPts() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " is dead!" << std::endl;
	}
	else if (this->getEnergyPts() == 0) {
		std::cout << "ScavTrap " << this->getName() << " needs Energy points to attack!" << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
		if (this->getHitPts() > 0) {
		std::cout << "ScavTrap " << this->getName()
			<< " is now in Gate keeper mode!" << std::endl;
		}
		else {
		std::cout << "ScavTrap " << this->getName()
			<< " cannot got to Gate keeper mode because he's dead!" << std::endl;
		}
		
}