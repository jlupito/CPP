/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:18:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/11 17:51:23 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

class Span {

private:
	std::vector<int> 	_span;
	size_t 				_size;  
public:
	Span( void );  // constructeur par defaut
	Span( size_t N );  // constructeur par defaut param
	Span( Span const &copy ); // constructeur de recopie
	~Span( void ); //destructeur
	Span &operator=( const Span &rhs); // operateur d affectation

	void addNumber( void );
	size_t shortestSpan() const;
	size_t longestSpan() const;
	
	class NoDistanceException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("There is no distance if there is no road my child!");
		}
	};
};


