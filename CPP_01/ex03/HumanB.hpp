/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 16:45:07 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

class HumanA {
	
	public:
    
    HumanB( void );
    ~HumanB( void );
        
    void	attack();	
    
    private:
	std::string _name;
	Weapon		_weaponType;
    
}

#endif
