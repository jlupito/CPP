/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/29 17:36:41 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>


class Sample {
	
public:
// classe canonique si contient au moins:
	
// - un constructeur par defaut:
	Sample( void ); 
	Sample( int const n ); 
// - un constructeur par copie: prenant en parametre une instance de la classe
// qu on est en train de declarer afin epouvoir realiser une copie de cette classe:
	Sample( Sample const & src );
// - un destructeur:
	~Sample( void );
	
// - un operateur egal (d assignation) pour faire une assign a partir dune autre 
// instance de cette classe:
	Sample &	operator=( Sample const & rhs);
	
	
	int		getFoo( void ) const;

private:

	int _foo;
	
};

std::ostream &	operator<<( std::ostream & o, Sample const & i );

#endif
