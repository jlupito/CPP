/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:32:53 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/17 14:05:12 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* Zombie::zombieHorde( int N, std::string name ) {
	
	new Zombie[N];
	for (int i = 0; i < N; i++) {
	Zombie::newZombie(Zombie[i]);
	
	}
	
	return Zombie;
}