/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:59 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/18 17:00:25 by jarthaud         ###   ########.fr       */
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
	std::deque<int> _containerD;
	std::vector<int> _unsortList;
	PmergeMe( PmergeMe const &rhs );
	PmergeMe &operator=( const PmergeMe &rhs);
	PmergeMe( void );

public:
	~PmergeMe( void );
	PmergeMe( char** av );

	class WrongInputException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class NoDivisionException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};