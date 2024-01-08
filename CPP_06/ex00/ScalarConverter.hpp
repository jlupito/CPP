/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:32 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/08 10:12:18 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP
#include <string>
#include <iostream>
#include <stdlib.h>

class ScalarConverter {
	
	public:
		static void convert( std::string& str );
		static void convert( const std::string& str );
        static bool isChar( std::string str );
        static bool isInt( std::string str );
        static bool isFloat( std::string str );
        static bool isDouble( std::string str );
        static void convertChar( char c );
        static void convertInt( int i );
        static void convertFloat( float f, std::string str );
        static void convertDouble( double d, std::string str );
        static void printInt( int i );
        static void printFloat( float f );
        static void printDouble( double d );
        static void printChar( char c );
		
	private:
		ScalarConverter( void );  // constructeur par defaut
		ScalarConverter( ScalarConverter const &rhs ); // constructeur de recopie
		~ScalarConverter( void ); //destructeur
		ScalarConverter &operator=( const ScalarConverter &rhs); // operateur d affectation
};

#endif