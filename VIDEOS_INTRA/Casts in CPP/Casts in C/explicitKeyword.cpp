/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explicitKeyword.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:59:03 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/04 11:13:16 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
CPP autorise systematiquement un cast implicite d une expression n importe
ou dans le code.
*/

#include <iostream>

class A {};
class B {};

class C {
	public:
				 C( A const & _ ) { return; } // 1er constr prend une ref sur une classe A
		explicit C( B const & _ ) { return; } // 2e prend une ref sur une class B
};

void	f( C const & _ ) {
	return;
}

int main( void ) {
	f( A() ); // Implicit conversion OK
	// fonctionne car conversion de A vers C avant l appelle a la fonction f
	f( B() ); // Implicit conversion NOT OK, constructor is explicit
	// le mot clef "explicit" interdit la construction implicit de l instance
	
	return 0;
}