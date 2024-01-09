/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:44:18 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/09 10:28:19 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template< typename T >
void iter(T *array, int len, void f(T&)) {
	if (!array or !len or !f) {
		std::cout << "Iter cannot be called." << std::endl;
		return;
	}
	else {
		for (int i = 0; i < len; i++) 
			f(array[i]);
	}
	return;
}

template< typename T >
void printVal(T &value) {
	std::cout << value << std::endl;
	return;
}