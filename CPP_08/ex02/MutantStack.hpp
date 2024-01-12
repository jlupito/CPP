/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:18:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/12 15:48:02 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <stack>
#include <deque>
#include <iterator>

template< typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack( void );
	~MutantStack( void );
	MutantStack( const MutantStack &rhs );
	MutantStack &operator=( const MutantStack &rhs);

	typedef typename std::deque<T>::iterator	iterator;
	
	iterator itBegin();
	iterator itEnd();
};

#include "MutantStack.tpp"
