/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReinterpretCat.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:30:57 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/08 11:41:04 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Le REINTERPRET CAST permet de realier de:
- reinterpretations
- downcasts
- upcasts
Cest le cast le plus permissif du CPP, donc attention aux consequences.
Le reinterpret_cast en C++ est un opérateur de conversion de type 
qui est utilisé pour convertir un pointeur d'un type vers un autre, 
ou pour convertir un entier non signé vers un pointeur et vice versa
*/

int main(void) {
	float a = 420.042f; //valeur de reference
	
	void * b = &a; // implicit promotion : OK
	int * c = reinterpret_cast<int *>(b); // Explicit demotion : OK
	int & d = reinterpret_cast<int &>(b); // Explicit demotion : OK
	
	return 0;
}