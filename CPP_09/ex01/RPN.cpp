/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:00:22 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/17 18:42:46 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN( RPN const &rhs ) { (void)rhs; }

RPN::~RPN( void ) {}

RPN &RPN::operator=( const RPN &rhs) {
	(void)rhs;
	return *this;
}

bool RPN::_isOperand(const char& c) {
	if (c == '*' or c == '/' or c == '+' or c == '-')
		return true;
	return false;
}

void RPN::_compute(std::string& input) {
	int nbr, ret = 0;
	for (size_t i = 0; i < input.size(); i++) {
		if (isdigit(input[i]))
			_stackRPN.push(atoi(std::string(1, input[i]).c_str()));
		else if (_isOperand(input[i]) and _stackRPN.size() > 1) {
			nbr = _stackRPN.top();
			_stackRPN.pop();
			if (input[i] == '*')
				ret = _stackRPN.top() * nbr;
			else if (input[i] == '+')
				ret = _stackRPN.top() + nbr;
			else if (input[i] == '-')
				ret = _stackRPN.top() - nbr;
			else if (input[i] == '/') {
				if (nbr == 0)
					throw NoDivisionException();
				ret = _stackRPN.top() / nbr;
			}
			_stackRPN.pop();
			_stackRPN.push(ret);
		}
		else 
			throw WrongInputException();
	}
	if (_stackRPN.size() != 1)
		throw WrongInputException();
	std::cout << ret << std::endl;
}

void RPN::runRPN(char* av) {
	std::string input(av);
	input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
	_compute(input);
}

const char *RPN::WrongInputException::what() const throw() {
	return ("Error: input can not be computed using RPN.");
}

const char *RPN::NoDivisionException::what() const throw() {
	return ("Error: can not compute a division by 0.");
}
