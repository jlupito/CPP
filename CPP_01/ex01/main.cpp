/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:44 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/30 11:14:22 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <sstream>
#include <string>

int	main() {
	
	std::string n = "";
	std::string name = "";
	int number;
	
	std::cout << "Number of Zombies > ";
	while (n.empty())
		std::getline(std::cin, n);
	std::cout << "Name of Zombie > ";
	while (name.empty())
		std::getline(std::cin, name);
	std::istringstream iss(n);
	iss >> number;
	
	Zombie* horde = zombieHorde(number, name);
	for (int i = 0; i < number; i++)
		horde[i].announce();
		
	delete [] horde;

	return 0;
}