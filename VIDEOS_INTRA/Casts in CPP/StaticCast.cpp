/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaticCast.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:43:31 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/05 17:33:27 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Il y a 5 actions de casts possibles:
	-conversions
	-reinterpetations
	-changements de types qualifiers
	-downcast
	-upcast

un premier cast CPP, le plus usuel : le STATIC CAST
permet de faire des conversions les plus simples possibles
mais aussi de naviguer dans l arbre de conversion.
Il empeche de faire des conversions entre des classes non liées
*/

/**********************CAS GENERAL****************************/
int main(void) {

	int a = 42; // valeur de reference
	
	double b = a; // promotion implicit = OK
	int c = b; // Implicit demotion = problem
	
	int d = static_cast<int>(b); // Explicit demotion = OK en cpp meme si perte de precision
}

/**********************DOWNCAST/UPCAST**************************/

class Parent {};
class Child1: public Parent {};
class Child2: public Parent {};

class Unrelated {};

int main(void) {
	
	Child1	a; // valeur de reference
	
	Parent * b = &a; // Implicit upcast = OK
	Child1 * c = b; // Implicit downcast = impossible !
	Child2 * d = static_cast<Child2 *>(b); // explicit downcast = OK meme si pb a la compilation

	Unrelated * e = static_cast<Unrelated *>(&a); // implicit conversion = NO !
	// le static cast va verifier que les adresses sont bien compatibles
	// dans un meme arbre d'heritage
}