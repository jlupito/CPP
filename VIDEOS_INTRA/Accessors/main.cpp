/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:29:37 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 17:45:55 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main() {

	Sample instance;

	instance.setFoo( 42 );
	std::cout << "instance.getFoo: " << instance.getFoo() << std::endl;
	instance.setFoo( -42 );
	std::cout << "instance.getFoo: " << instance.getFoo() << std::endl;
	
	return 0;
}
