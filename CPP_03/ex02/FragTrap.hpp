/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:16:59 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/07 15:39:58 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    
public:

	FragTrap( void );
	FragTrap( std::string name );  // constructeur par defaut
	FragTrap( FragTrap const &copy ); // constructeur de recopie
	~FragTrap( void ); //destructeur
	
	FragTrap &operator=( const FragTrap &copy ); // operateur d affectation

	void	attack( const std::string& target );
	void	highFivesGuys( void );
};

#endif