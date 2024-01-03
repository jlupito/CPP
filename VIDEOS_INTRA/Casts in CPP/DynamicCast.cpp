/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DynamicCast.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:59:54 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 17:23:59 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
le seul cast a avoir lieu au runtime (execution),les autres 
sont fait a la compilation (statique).Un programme peut compiler 
mais le cast peut echouer a l execution.
Attention:
- Ne fonctionne que dans une instance polymorphique (au moins
une fonction membre virtuelle).
*/

#include <iostream>
#include <typeinfo>
#include <exception>

class Parent { public: virtual ~Parent(void){}};
class Child1: public Parent {};
class Child2: public Parent {};

class Unrelated {};

int main(void) {
	
	Child1	a; // valeur de reference
	Parent * b = &a; // Implicit upcast = OK

	// explicit downcast
	Child1 * c = dynamic_cast<Child1 *>(b);
	if (c == NULL) {
		std::cout << "Conversion is NOT ok" << std::endl;
	}
	else {
		std::cout << "Conversion is ok" << std::endl;
	}

	// explicit downcast
	try {
		Child2 * c = dynamic_cast<Child2 &>(*b);
		std::cout << "Conversion is ok" << std::endl;
	}
	catch (std::bad_cast &bc) {
		std::cout << "Conversion is NOT ok" << bc.what() << std::endl;
		return 0;
	}
	return 0;
}