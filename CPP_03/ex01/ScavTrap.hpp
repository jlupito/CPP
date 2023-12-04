/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:16:59 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/04 18:37:36 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    
public:

	ScavTrap( std::string name );  // constructeur par defaut
	ScavTrap( ScavTrap const &copy ); // constructeur de recopie
	~ScavTrap( void ); //destructeur
	
	ScavTrap &operator=( const ScavTrap &copy); // operateur d affectation

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
    
private:

    std::string     _name;
    int				_hitPts;
	int				_energyPts;
	int				_attackPts;
    
};

#endif