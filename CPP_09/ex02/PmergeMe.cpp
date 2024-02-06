/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:55:49 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/31 11:34:43 by jarthaud         ###   ########.fr       */
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
	// int sizeBefore = _vecToSort.size();
	_sortFJ(_deqToSort);
	time = _getTime() - time;
	std::cout << "After: ";
	for (std::deque<int>::const_iterator it = _deqToSort.begin(); it != _deqToSort.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << _deqToSort.size()
		<< " elements with std::deque<int> : " << time << " us" << std::endl;
	time = _getTime();
	_sortFJ(_vecToSort);
	time = _getTime() - time;
	std::cout << "Time to process a range of " << _vecToSort.size()
		<< " elements with std::vector<int> : " << time << " us" << std::endl;
	// int k = 0, l = 0;
	// for (size_t i = 0; i < _deqToSort.size() - 1; i++) {
	// 	if (_deqToSort[i] > _deqToSort[i + 1])
	// 		k++;
	// 	if (i == _deqToSort.size() - 2)
	// 		std::cout << "Vector sort succeeded" << std::endl;
	// }
	// for (size_t i = 0; i < _vecToSort.size() - 1; i++) {
	// 	if (_vecToSort[i] > _vecToSort[i + 1])
	// 		l++;
	// 	if (i == _vecToSort.size() - 2)
	// 		std::cout << "Deque sort succeeded" << std::endl;
	// }
	// std::cout << "size before: " << sizeBefore << std::endl;
	// std::cout << "size after: " << _vecToSort.size() << std::endl;
	// std::cout << "nb of unsorted in deq: " << k << " in vec: " << l << std::endl;
}

template< typename T >
void PmergeMe::_sortFJ( T& toSort ) {
	T main;
	T pend;
	for (size_t i = 0; i < toSort.size() - 1; i += 2) {
		if (toSort[i] > toSort[i + 1])
			std::swap(toSort[i], toSort[i + 1]);
	}
	if (toSort.size() > 2) {
		for (size_t i = 0; i < toSort.size(); i += 2) {
			main.push_back(toSort[i]);
			if (i < toSort.size() - 1)
				pend.push_back(toSort[i + 1]);
		}
		_sortFJ(main);
		size_t sizeMax = pend.size();
		for (size_t index = 0; index < sizeMax; index++) {
			size_t jack = 0;
			size_t sortIndex = 0;
			for (; _jacobsthal(jack) < index; jack++) {}
			if (jack) {
				if (_jacobsthal(jack) >= sizeMax - 1)
					sortIndex = sizeMax - (index - _jacobsthal(jack - 1));
				else
					sortIndex = _jacobsthal(jack) + 1 - (index - _jacobsthal(jack - 1)); 
			}
			_binarySearchInsert(main, pend[sortIndex]);
		}
		toSort = main;
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

unsigned int PmergeMe::_jacobsthal(unsigned int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return _jacobsthal(n - 1) + 2 * _jacobsthal(n - 2);
    }
}

template< typename T >
void PmergeMe::_binarySearchInsert(T& container, int value) {
	int low = 0;
    int high = container.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (container[mid] == value)
            return; 
		else if (container[mid] < value)
            low = mid + 1;
		else
            high = mid - 1;
    }
    container.insert(container.begin() + low, value);// Insére la valeur à l'index "low"
}

const char *PmergeMe::WrongInputException::what() const throw() {
	return ("Error: input is not a positive integer sequence.");
}

const char *PmergeMe::DuplicatesException::what() const throw() {
	return ("Error: a duplicate was found in the sequence.");
}