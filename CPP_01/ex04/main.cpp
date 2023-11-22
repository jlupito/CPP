/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/22 16:40:37 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

static void	replace(std::string filename, std::string s1, std::string s2) {
	
	std::fstream	old_file;
	std::fstream	new_file;

	
	
	
}


int main(int ac, char **av) {

	if (ac != 4) {
		std::cout << "Error in number of arguments" << std::endl;
		return 1;
	}
	
	if (!av[2][0] || !av[3][0]) {
		std::cout << "Strings cannot be empty" << std::endl;
		return 1;
	}

	replace(av[1], av[2], av[3]);
	
	return 0;
}