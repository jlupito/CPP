/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/21 13:43:25 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	
	public:
    
    HumanB( std::string name );
    ~HumanB( void );
        
    void	attack( void );
    void    setWeapon(Weapon &weapon);
    
    private:
    
	std::string _name;
	Weapon		*_weapon;
    
};

#endif
