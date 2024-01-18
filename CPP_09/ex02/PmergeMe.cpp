/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:49 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/18 18:02:49 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

	PmergeMe::PmergeMe( char** av ) {
		for (int i = 0; av[i]; i++) {
			int nb = atoi(av[i]);
			if (iss >> nb) {
				if (nb >= 0 and nb <= INT_MAX)
					_unsortList.push_back(nb);
				else 
					throw WrongInputException();
			}
			throw WrongInputException();
		}
		std::cout << "Before: ";
		for (std::vector<int>::const_iterator it = _unsortList.begin(); it != _unsortList.end(); ++it) {
        	std::cout << *it << " ";
    	}
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