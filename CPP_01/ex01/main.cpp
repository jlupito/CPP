/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:44 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 14:13:55 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* zombieHorde( int N, std::string name );

int	main() {
	
	std::string n = "";
	std::string name = "";
	
	std::cout << "Number of Zombies > ";
	std::getline(std::cin, n);
	std::cout << "Name of Zombie > ";
	std::getline(std::cin, name);
	Zombie* horde = zombieHorde(std::stoi(n), name);
	for (int i = 0; i < std::stoi(n); i++) {
		horde[i].announce();
	}
	
	delete [] horde;

	return 0;
}