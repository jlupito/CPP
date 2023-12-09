/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:21:02 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/09 11:10:52 by jarthaud         ###   ########.fr       */
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
	
	private:
	
		std::string _ideas[100];
	
};