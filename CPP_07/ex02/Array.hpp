/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:30:49 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/09 15:00:00 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#define _GREY 	"\033[90m"
#define _END "\1\033[0m\2"

template< typename T >

class Array {
public:
	Array( void );
	Array( unsigned int n );
	~Array( void );
	Array( const Array &rhs );
	Array &operator=( const Array &rhs);
	unsigned int size( void ) const;
	T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

private:
	unsigned int _size;
	T* _array;

class OutOfRangeException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Index is out of range!");
			}
		};
};

#include "Array.tpp"