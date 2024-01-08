/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:08:31 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/08 12:21:28 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <string>
#include <iostream>

struct Data {
	std::string _str;
	uintptr_t _value;

};

class Serializer {
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
	private:
		Serializer( void );  // constructeur par defaut
		Serializer( Serializer const &rhs ); // constructeur de recopie
		~Serializer( void ); //destructeur
		Serializer &operator=( const Serializer &rhs); // operateur d affectation
	
};


#endif
