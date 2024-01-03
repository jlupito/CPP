/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UpcastDowncast.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:29:45 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 16:42:28 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent {};
class Child1: public Parent {};
class Child2: public Parent {};

// il y a une comptabilité de pointeurs/adresses 
// entre les classes parents et enfants.
// les classes apportent une hierarchie type

int main(void) {
	
	Child1	a; // valeur de reference
	
	Parent * b = &a; // reinterpretation implicite d un type plus precis (enfant) vers un type generique (parent)
	Parent * c = (Parent *) &a; // explicite

	Parent * d = &a; // implicit upcast
	Child1 * e = d; // implicit downcast, IMPOSSIBLE, ne compile pas
	Child2 * f = (Child2 *) d; // cela compile mais pb a l execution
	
}