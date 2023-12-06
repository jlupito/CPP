/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/06 17:33:23 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

class ClapTrap {
    
public:

	ClapTrap( std::string name );  // constructeur par defaut
	ClapTrap( ClapTrap const &copy ); // constructeur de recopie
	~ClapTrap( void ); //destructeur
	ClapTrap &operator=( const ClapTrap &copy ); // operateur d affectation

	void		attack( const std::string& target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	std::string	getName( void ) const;
	void		setEnergyPts( int pts );
	int 		getEnergyPts( void ) const;
	void		setAttackPts( int pts );
	int			getAttackPts( void ) const;
	void		setHitPts( int pts );
	int			getHitPts( void ) const;
    
protected:

    std::string     _name;
    int				_hitPts;
	int				_energyPts;
	int				_attackPts;
    
};

#endif