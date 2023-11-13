/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:29:37 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/13 12:03:00 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main() {
	
	Sample 		instance; // declare variable sur la pile
	Sample *	instancep = &instance; // pointeur sur un autre variable de type sample

	int			Sample::*p = NULL; // pointeur sur un attribut membre de ma classe sample
	void		(Sample::*f)( void ) const;

	p = &Sample::foo;
	
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21; // *. si pour mettre a jour avec le pointeur directement sur l instance
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42; // ->* pour utiliser le pointeur sur une instance
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return 0;
}
