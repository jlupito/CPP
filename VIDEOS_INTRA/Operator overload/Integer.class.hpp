/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/29 17:14:30 by jarthaud         ###   ########.fr       */
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
// operateur peut etre binaire (2 operandes)

class Integer {
	
public:
	
	Integer( int const n ); 
	~Integer( void );
	
	int		getValue( void ) const;
	
	// parametre cache qui represente mon instance courante (this) = 2 parametres
	// donc ici param cache + 1 ref sur 1 instance const de notre classe Integer  : right hand side
	Integer &	operator=( Integer const & rhs ); 
	// instance courante renvoyee pour avoir un chainage
	Integer		operator+( Integer const & rhs ) const;
	// instance courante pas modifiee du coup const et renvoie une copie du resultat

private:

	int _n;
	
};

std::ostream &	operator<<( std::ostream & o, Integer const & rhs );

#endif

// surcharge d operateur doit etre naturelle
// elle doit avoir un rapport avec la semantique naturelle de l operateur
// ne pas faire de surcharge d operateur, les cas justifies sont rares
// surcharge de l operator() est peut etre le plus commun