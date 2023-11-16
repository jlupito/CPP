/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:40 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/16 14:14:25 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
    
    public:
    
    Zombie( void );
    ~Zombie( void );
    Zombie( std::string name );
    
    void            announce( void );
    static void     randomChump( std::string name );
    static Zombie*  newZombie( std::string name );     
    
    private:
    
    std::string     _name;

};

#endif