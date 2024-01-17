/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:27 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/17 11:23:06 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: the program takes [only/at least] one argument." << std::endl;
		return 1;
	}
	try {
		RPN rpn;
		rpn.runRPN(av[1]);
	}
	catch (std::exception& e) { 
		std::cout << e.what() << std::endl;
	}	
	return 0;
}
