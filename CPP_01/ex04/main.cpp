/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/21 16:55:36 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

int main(int ac, char **av) {

	
	if (ac != 4) {
		std::cout << "Error in number of arguments" << std::endl;
		return 1;
	}
	

	std::ifstream file(av[1].c_str()); // tester si fichier existe
	std::ofstream file(av[1].c_str(), std::ios::app); // tester si Write OK
	std::string s1 = av[2];
	std::string s2 = av[3];

	
	
	return 0;
}