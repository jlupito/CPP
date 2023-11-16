/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:44 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/16 14:28:53 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main() {
	
	Zombie::randomChump("Stack Zombie");

	Zombie *zombieHeap = Zombie::newZombie("Heap Zombie");
	zombieHeap->announce();
	
	delete zombieHeap;

	return 0;
}