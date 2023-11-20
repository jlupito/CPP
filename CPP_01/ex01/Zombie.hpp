/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:40 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 14:20:24 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
    
    public:
    
    Zombie( void );
    ~Zombie( void );
        
    void            announce( void );
    void            set_name( std::string name );
    
    private:
    
    std::string     _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif