/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CastOperator.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:47:04 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/04 10:56:06 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Les types cast operators de CPP : 
Nouvelle synthaxe qui va permettre de definir au sein de nos classes
des operateurs specifiques afin de pouvoir faire des conversions implicites
de notre classe vers un type qui nous interesse.
*/

#include <iostream>

class Foo {
	public:
		Foo( float const v ) : _v( v ) {}
		float getV(void) { return this->_v; }
		operator float() { return this->_v; }
		operator int() { return static_cast<int>( this->_v ); }

	private:
		float _v;
};

int main(void) {
	Foo 	a( 420.024f );
	float 	b = a;
	int		c = a;

	std::cout << a.getV() << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}