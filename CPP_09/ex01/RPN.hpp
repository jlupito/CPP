/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:00:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/16 18:10:07 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <exception>
#include <algorithm>

class RPN {

private:
	std::stack<int> _stack;
	RPN( RPN const &rhs );
	RPN &operator=( const RPN &rhs);

public:
	RPN( void );
	~RPN( void );

	class FileException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	
};