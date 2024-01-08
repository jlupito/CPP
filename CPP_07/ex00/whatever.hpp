/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:24:23 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/08 17:46:11 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template< typename T >
void swap(T& x, T& y) {
	T tmp = x;
	x = y;
	y = tmp;
	return;
}

template< typename T >
T const & min(T const &x, T const &y) {
	return (x < y ? x : y);
}

template< typename T >
T const & max(T const &x, T const &y) {
	return (x > y ? x : y);
}