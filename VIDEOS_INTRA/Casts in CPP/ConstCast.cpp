/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConstCast.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:40:00 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/04 10:45:31 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Aucun des 3 casts precedents ne peut faire une transformation
des qualifiers de type.
Le CONST CAST ets celui qui peut le faire.

*/

int main(void) {
	
	int a = 42; //valeur de reference
	
	int const * b = &a; // Implicit promotion : OK
	// (les valeurs constantes sont plus hautes que les valeurs mutables)

	int * c = b; // Implicit demotion : NOOOOOOO, ne compile pas
	
	int * d = const_cast<int *>(b); // explicit demotion : OK
	// changement de qualifiers de type
	// attention ca compile mais ca peut etr dangereux de faire ca

	return 0;
	
}