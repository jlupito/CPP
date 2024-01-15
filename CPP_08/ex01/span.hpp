/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:18:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/15 11:05:41 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <vector>
#include <list>

class Span {

private:
	std::vector<int> 	_span;
	size_t 				_size;  
	Span &operator=( const Span &rhs); // operateur d affectation
public:
	Span( size_t N );  // constructeur par defaut param
	Span( Span const &rhs ); // constructeur de recopie
	~Span( void ); //destructeur

	void addNumber( int nb );
	void addNumber( std::vector<int> tabAdd );
	size_t shortestSpan();
	size_t longestSpan();

	int	getVal( int index);
	
	class NoDistanceException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("It takes at least two to span!");
		}
	};
	
	class FullException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("There is not enough space for all the spanners!");
		}
	};
};


