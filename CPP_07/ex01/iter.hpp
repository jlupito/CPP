/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:44:18 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/08 17:55:08 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template< typename T >
void iter(T *array, size_t len, void(*f)(T&)) {
	if (!array or !len or !foo) {
		std::cout << "Iter cannot be called." << std::endl;
		return;
	}
	else {
		for (int i = 0; i < len; i++) 
			f(array[i]);
	}
	return;
}