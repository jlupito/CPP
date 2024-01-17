/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:00:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/17 20:00:10 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <cstdlib>
#include <exception>
#include <algorithm>

class RPN {

private:
	std::stack<int> _stackRPN;
	bool _isOperator(const char& c);
	void _process(std::string& input);
	RPN( RPN const &rhs );
	RPN &operator=( const RPN &rhs);

public:
	RPN( void );
	~RPN( void );
	void runRPN(char* av);

	class WrongInputException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class NoDivisionException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	
};