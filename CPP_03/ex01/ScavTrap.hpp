/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:16:59 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/05 11:13:17 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    
public:

	ScavTrap(void);
	ScavTrap( std::string name );  // constructeur par defaut
	ScavTrap( ScavTrap const &copy ); // constructeur de recopie
	~ScavTrap( void ); //destructeur
	
	ScavTrap &operator=( const ScavTrap &copy); // operateur d affectation

	void	attack(const std::string& target);
	void	guardGate( void );	
    
};

#endif