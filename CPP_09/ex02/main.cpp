/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:27 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/24 15:45:39 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	
	if (ac == 1) {
		std::cerr << "Error: the program takes at least one argument." << std::endl;
		return 1;
	}
	try {
		PmergeMe pmm(av);
		pmm.process();
	}
	catch (std::exception& e) { 
		std::cout << e.what() << std::endl;
	}	
	return 0;
}
