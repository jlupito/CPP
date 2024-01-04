/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:32 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/04 12:29:06 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class ScalarConverter {
	public:
		static void convert( std::string str );
	private:
		ScalarConverter( void );  // constructeur par defaut
		ScalarConverter( ScalarConverter const &rhs ); // constructeur de recopie
		~ScalarConverter( void ); //destructeur
		ScalarConverter &operator=( const ScalarConverter &rhs); // operateur d affectation
		
		
}