/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:21:02 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/12 11:43:49 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	
	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const &copy ); // constructeur de recopie
		Brain &operator=( const Brain &copy); // operateur d affectation
		std::string ideas[100];
};

#endif