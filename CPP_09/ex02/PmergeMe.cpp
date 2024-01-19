/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:49 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/19 19:18:43 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

long long int PmergeMe::_getTime() {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000000 + tv.tv_usec);
}

bool PmergeMe::_isInt( const std::string& str ) {
	size_t	i = 0;
	if (str[i] == '+' or str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (i == str.length())
		return true;
	return false;
}

PmergeMe::PmergeMe( char** av ) {
	for (int i = 1; av[i]; i++) {
		std::istringstream iss(av[i]);
		int nb;
		if (_isInt(av[i]) and (iss >> nb) and (nb >= 0 and nb <= INT_MAX)) {
				std::vector<int>::iterator it = std::find(_vecToSort.begin(), _vecToSort.end(), nb);
				if (it != _vecToSort.end())
					throw DuplicatesException();
				_deqToSort.push_back(nb);
				_vecToSort.push_back(nb);
			}
		else
			throw WrongInputException();
	}
	std::cout << "Before: ";
	for (std::vector<int>::const_iterator it = _vecToSort.begin(); it != _vecToSort.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::process( void ) {
	unsigned long long time = _getTime();
	_sortFJ(_deqToSort);
	time = _getTime() - time;
	time = _getTime();
	// print la liste sorted "After:"
	// print deque container 
	_sortFJ(_vecToSort);
	time = _getTime() - time;
	// print vector container

}

template< typename T >
void PmergeMe::_sortFJ( T& toSort ) {
	T main;
	T pend;
	if (toSort.size() % 2)
		int unPaired = toSort.back();
	for (i = 0; i < toSort.size(); i += 2) {
		if (toSort[i])
	}
	
	
}

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe( void ) {}

PmergeMe::PmergeMe( PmergeMe const &rhs ) {
	(void)rhs;
}

PmergeMe &PmergeMe::operator=( const PmergeMe &rhs ) {
	(void) rhs;
	return (*this);
}

const char *PmergeMe::WrongInputException::what() const throw() {
	return ("Error: input is not a positive integer sequence.");
}

const char *PmergeMe::DuplicatesException::what() const throw() {
	return ("Error: a duplicate was found in the sequence.");
}

// unsigned int jacobsthal(unsigned int n) {
//     if (n == 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     } else {
//         return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
//     }
// }