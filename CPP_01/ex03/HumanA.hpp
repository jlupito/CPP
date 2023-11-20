/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 16:45:59 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

class HumanA {
	
	public:
    
    HumanA( Weapon weapon );
    ~HumanA( void );
        
    void	attack();	
    
    private:
	std::string _name;
	Weapon		_weapon;
    
}

#endif