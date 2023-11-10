/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:29:37 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 18:09:09 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main() {

	Sample instance1( 42 );
	Sample instance2( 42 );

	if ( &instance1 == &instance1 )
		std::cout << "instance1 & instance1 are physically equal" << std::endl;
	else
		std::cout << "instance1 & instance1 are not physically equal" << std::endl;

	if ( &instance1 == &instance2 )
		std::cout << "instance1 & instance2 are physically equal" << std::endl;
	else
		std::cout << "instance1 & instance2 are not physically equal" << std::endl;
	
	
	if ( instance1.compare( &instance1 ) == 0 )
		std::cout << "instance1 & instance1 are structurally equal" << std::endl;
	else
		std::cout << "instance1 & instance1 are not structurally equal" << std::endl;

	if ( instance1.compare( &instance2 ) == 0 )
		std::cout << "instance1 & instance2 are structurally equal" << std::endl;
	else
		std::cout << "instance1 & instance2 are not structurally equal" << std::endl;
	
	return 0;
}
