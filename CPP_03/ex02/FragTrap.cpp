/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:16:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/07 15:48:43 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap( void) : ClapTrap("Default") {
			_name = "Default";
			_hitPts = 100;
			_energyPts = 50;
			_attackPts = 20;
	std::cout << this->_name << " is created." << std::endl;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name) {
			_name = name;
			_hitPts = 100;
			_energyPts = 50;
			_attackPts = 20;
	std::cout << "Default FragTrap " << this->getName() << " is created." << std::endl;
}

FragTrap::FragTrap( const FragTrap &FragTrap ) : ClapTrap(FragTrap._name) {
	std::cout << "Copy FragTrap " << FragTrap._name << " is created." << std::endl;
	this->_name = FragTrap.getName();
	this->setHitPts(FragTrap.getHitPts());
	this->setEnergyPts(FragTrap.getEnergyPts());
	this->setAttackPts(FragTrap.getAttackPts());
}

FragTrap::~FragTrap( void ) {
	std::cout << "Default FragTrap " << this->getName() << " is destroyed." << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &copy) {
	std::cout << "Called assignment operator." << std::endl;
	if (this != &copy) {
		this->_name = copy.getName();
		this->setHitPts(copy.getHitPts());
		this->setEnergyPts(copy.getEnergyPts());
		this->setAttackPts(copy.getAttackPts());
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target) {
	if (this->getHitPts() > 0) {
		this->_energyPts--;
		std::cout << "FragTrap " << this->getName() << " attacks " << target 
		<< ", causing " << this->getAttackPts() << " points of Damage!" << std::endl;
	}
	if (this->getHitPts() <= 0) {
		std::cout << "FragTrap " << this->getName() << " is dead!" << std::endl;
	}
	else if (this->getEnergyPts() == 0) {
		std::cout << "FragTrap " << this->getName() << " needs Energy points to attack!" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void) {
		if (this->getHitPts() > 0) {
		std::cout << "FragTrap " << this->getName()
			<< " says HEY gimme five buddy!" << std::endl;
		}
		else {
		std::cout << "FragTrag " << this->getName()
			<< " cannot got to Gate keeper mode because he's dead!" << std::endl;
		}
}