/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:44 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/17 14:03:15 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int	main() {
	
	std::string n = "";
	std::string name = "";
	
	Zombie *theHorde = Zombie::zombieHorde(std::stoi(n), name);
	std::cout << "Number of Zombies > ";
	std::getline(std::cin, n);
	std::cout << "Name of Zombie > ";
	std::getline(std::cin, name);
	for (int i = 0; i < 35; i++) {
		theHorde[i].announce();
	}
	
	delete [] theHorde;

	return 0;
}