/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:29:37 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/13 11:37:49 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	f0( void ) {

	Sample instance;

	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;

	return;
}

void	f1( void ) {

	Sample instance;

	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	f0();

	return;
}

int	main() {
	
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;

	return 0;
}
