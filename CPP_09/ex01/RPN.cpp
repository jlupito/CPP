/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:00:22 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/16 18:29:38 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {

}

RPN::RPN( RPN const &rhs ) {
	*this = rhs;
}

RPN::~RPN( void ) {}

RPN &RPN::operator=( const RPN &rhs) {
	(void)rhs;
	if (this != &rhs)
		this->_stack= rhs._stack;
	return *this;
}