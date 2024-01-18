/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:59 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/18 22:32:18 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <deque>
#include <vector>
#include <cstdlib>
#include <climits>
#include <exception>
#include <algorithm>

class PmergeMe {

private:
	std::deque<int> _deqToSort;
	std::vector<int> _vecToSort;
	std::vector<int> _unsortList;
	bool _isInt(const std::string& str);
	PmergeMe( PmergeMe const &rhs );
	PmergeMe &operator=( const PmergeMe &rhs);
	PmergeMe( void );

public:
	~PmergeMe( void );
	PmergeMe( char** av );
	long long int getTime();

	class WrongInputException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class NoDivisionException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};