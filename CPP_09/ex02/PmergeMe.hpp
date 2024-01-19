/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:59 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/19 19:01:23 by jarthaud         ###   ########.fr       */
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
#include <sys/time.h>

class PmergeMe {

private:
	std::deque<int> _deqToSort;
	std::vector<int> _vecToSort;
	bool _isInt(const std::string& str);
	PmergeMe( PmergeMe const &rhs );
	PmergeMe &operator=( const PmergeMe &rhs);
	PmergeMe( void );
	template< typename T >
	void _sortFJ(T& toSort);
	long long int _getTime();

public:
	~PmergeMe( void );
	PmergeMe( char** av );
	
	void process( void);
	
	class WrongInputException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class DuplicatesException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};