/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/06 14:19:05 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : 
			_name( name ), _hitPts(10), _energyPts(10), _attackPts(0) {
	std::cout << "Default Claptrap " << name << " is created." << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &copy ) {
	*this = copy;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Default Claptrap " << this->getName() << " is destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &copy ) {
	std::cout << "Called assignment operator." << std::endl;
	if (this != &copy) {
		this->_name = copy.getName();
		this->setHitPts(copy.getHitPts());
		this->setEnergyPts(copy.getEnergyPts());
		this->setAttackPts(copy.getAttackPts());
	}
	return ( *this );
}

void	ClapTrap::attack( const std::string& target ) {
	if (this->getHitPts() > 0) {
		this->_energyPts--;
		std::cout << "ClapTrap " << this->getName() << " attacks " << target 
		<< ", causing " << this->getAttackPts() << " points of Damage!" << std::endl;
	}
	if (this->getHitPts() <= 0) {
		std::cout << "ClapTrap " << this->getName() << " is dead!" << std::endl;
	}
	else if (this->getEnergyPts() == 0) {
		std::cout << "ClapTrap " << this->getName() << " needs Energy points to attack!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPts > 0) {
		this->_hitPts--;
		std::cout << "ClapTrap " << this->getName() << " has been attacked and looses " 
		<< amount << " Hit points!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << this->getName() << " is alredy dead bro!" 
		<< std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->getEnergyPts() > 0) {
		this->_energyPts--;
		this->_hitPts += amount;
		std::cout << "ClapTrap " << this->getName() << " is repairing itself and gets "
		<< amount << " Hit point(s) back!" << std::endl;
	}
	if (this->getHitPts() <= 0) {
		std::cout << "ClapTrap " << this->getName() << " is dead!" << std::endl;
	}
	else if (this->getEnergyPts()== 0) {
			std::cout << "ClapTrap " << this->getName() << " needs Energy points to repair!" << std::endl;
	}
}

std::string     ClapTrap::getName( void ) const {
	return (this->_name);
}

int     ClapTrap::getEnergyPts( void ) const {
	return (this->_energyPts);
}

void    ClapTrap::setEnergyPts( int pts ) {
	this->_energyPts = pts;
}

int     ClapTrap::getAttackPts( void ) const {
	return (this->_attackPts);
}

void    ClapTrap::setAttackPts( int pts ) {
	this->_attackPts = pts;
}

int     ClapTrap::getHitPts( void ) const {
	return (this->_hitPts);
}

void    ClapTrap::setHitPts( int pts ) {
	this->_hitPts = pts;
}
