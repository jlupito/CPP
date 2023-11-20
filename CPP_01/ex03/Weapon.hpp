/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:24:39 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 16:40:54 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	
	public:
    
    Weapon( void );
    ~Weapon( void );
        
    std::string const &		getType() const;
    void           			setType( str::string type );
    
    private:
    
    std::string     _weaponType;
}

#endif