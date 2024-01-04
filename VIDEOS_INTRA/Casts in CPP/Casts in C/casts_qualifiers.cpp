/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casts_qualifiers.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:18:43 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 16:25:53 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// conversions comme actions de casts
// conversions identitaires = reinterpretations
// cas particuliers de reinterpreations (pas de tranformation des bits
// casts de type QUALIFIERS = const | volatile

// Qualifiers rajoute une notion de HIERARCHIE avec des types -/+ precis

// adresse d entier constant va etre plus generale, plus haute
// que celle d un entier qui sera plus basse plus precise

int main(void) {
	
	 int a = 42; // valeur de reference

	 int const * b = &a; // Implicit type qualifier const (adresse entier vers constant)
	 int const * c = (int const *) &a; // explicite type qualifier const

	 int const * d = &a;
	 int * e = d; // demotion implicite, le compilateur va REFUSER
	 int * f = (int *) d; // il faudra utiliser le cast explicite
}
