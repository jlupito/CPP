/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/29 12:29:12 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

#include <iostream>

// 1 + 1 : notation infixe car l operateur est entre les 2 operandes
// 1 1 + : notation post fixe
// + 1 1 : notation pre fixe, aussi appelee notation fonctionnelle: 
// le cas ou on a une simple fonction qui prend 2 parametres: + (1, 1)
// ou une instance et une fonction membre de l instance "+"" a laquelle on
// enverrait le parametre "1" ce qui donne:  1.+( 1 )

class Integer {
	
public:
	
	Integer( int const n ); 
	~Integer( void );
	
	int		getValue( void ) const;
	
	Integer &	operator=( Integer const & rhs ); // rhs : right hand side
	Integer		operator+( Integer const & rhs ) const;

private:

	int _n;
	
};

std::ostream &	operator<<( std::ostream & o, Integer const & rhs );

#endif
