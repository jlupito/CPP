/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:32 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/05 17:39:03 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        static void convertChar( char _char );
        static void convertInt( int _int );
        static void convertFloat( float _float, std::string str );
        static void convertDouble( double _double, std::string str );
        static void printInt( int _int );
        static void printFloat( float _float );
        static void printDouble( double _double );
        static void printChar( char _char );
		
	private:
		ScalarConverter( void );  // constructeur par defaut
		ScalarConverter( ScalarConverter const &rhs ); // constructeur de recopie
		~ScalarConverter( void ); //destructeur
		ScalarConverter &operator=( const ScalarConverter &rhs); // operateur d affectation
};