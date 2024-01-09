/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:23:06 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/09 17:48:52 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void) {
	int randomVal = std::rand() % 3;
	switch(randomVal) {
	case 0:
		std::cout << "Class A is instanciated." << std::endl;
		return new A;
	case 1:
		std::cout << "Class B is instanciated." << std::endl;
		return new B;
	case 2:
		std::cout << "Class B is instanciated." << std::endl;
		return new B;
	}
	return NULL;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Actual type of p is A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Actual type of p is B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Actual type of p is C." << std::endl;
	else
		std::cout << "Type of the object is unknown." << std::endl;
		
}

void identify(Base& p) {
	Base tmp;
	try {
		tmp = dynamic_cast<A&>(p);
		std::cout << "Actual type of p is A." << std::endl;
		return;
	}
	catch (std::exception& e) {	(void)e; }
	try {
		tmp = dynamic_cast<B&>(p);
		std::cout << "Actual type of p is B." << std::endl;
		return;
	}
	catch (std::exception& e) {	(void)e; }
	try {
		tmp = dynamic_cast<C&>(p);
		std::cout << "Actual type of p is C." << std::endl;
		return;
	}
	catch (std::exception& e) {	(void)e; }
}
