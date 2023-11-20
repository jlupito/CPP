/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:32:53 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 14:14:42 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name ) {
	
	Zombie*	horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
	horde[i].set_name(name);
	
	}
	
	return horde;
}