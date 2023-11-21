/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:24:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/21 13:41:39 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	
	public:
    
    Weapon( std::string weaponType );
    ~Weapon( void );
        
    std::string const &		getType();
    void           			setType( std::string weaponType );
    
    private:
    
    std::string     _type;
};

#endif