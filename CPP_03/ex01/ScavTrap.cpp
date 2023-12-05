/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:16:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/05 17:18:08 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void) : ClapTrap() {
	std::cout << "Default ScavTrap " << this->_name << " is created." << std::endl;
}

ScavTrap::ScavTrap( std::string name) : 
			_name(name), _hitPts(100), _energyPts(50), _attackPts(20) {
	std::cout << "Default ScavTrap " << name << " is created." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavTrap ) : ClapTrap(scavTrap._name) {
	std::cout << "Copy ScavTrap " << scavTrap._name << " is created." << std::endl;
	this->_name = scavTrap.getName();
	this->setHitPts(scavTrap.getHitPts());
	this->setEnergyPts(scavTrap.getEnergyPts());
	this->setAttackPts(scavTrap.getAttackPts());
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Default ScavTrap " << _name << " is destroyed." << std::endl;
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