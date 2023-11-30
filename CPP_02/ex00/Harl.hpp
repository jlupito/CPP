/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/25 10:54:08 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Harl {
    
    public:
        Harl(void);
        ~Harl(void);
        void complain( std::string level );

    private:
        void _debug(void);
        void _warning(void);
        void _info(void);
        void _error(void);
};

//typedef void	(Harl::* harlFunctionPtr)(void);

#endif