/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:49 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/18 22:48:40 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

long long int getTime() {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000000 + tv.tv_usec);
}

bool PmergeMe::_isInt(const std::string& str) {
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
				_unsortList.push_back(nb);
				_deqToSort.push_back(nb);
				_vecToSort.push_back(nb);
			}
		else
			throw WrongInputException();
	}
	std::cout << "Before: ";
	for (std::vector<int>::const_iterator it = _unsortList.begin(); it != _unsortList.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe( void ) {}

PmergeMe::PmergeMe( PmergeMe const &rhs ) {
	(void)rhs;
}

PmergeMe &PmergeMe::operator=( const PmergeMe &rhs) {
	(void) rhs;
	return (*this);
}

const char *PmergeMe::WrongInputException::what() const throw() {
	return ("Error: input is not a positive integer sequence.");
}