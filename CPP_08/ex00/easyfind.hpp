/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:18:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/10 17:15:56 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

class NotFoundException : public std::exception {
public:
	virtual const char* what() const throw() {
		return ("Look elsewhere!");
	}
};

template< typename T >
typename T::iterator easyfind(T &container, int value);

#include "easyfind.tpp"
