/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:08:00 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/08 12:21:23 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#define _GREY 	"\033[90m"
#define _END "\1\033[0m\2"

Serializer::Serializer() {
	std::cout << _GREY "Default Serializer constructor is called." _END << std::endl;
}

Serializer::Serializer( Serializer const &rhs ) {
	std::cout << _GREY "Copy Serializer constructor is called." _END << std::endl;
	(void)rhs;
}

Serializer::~Serializer() {
	std::cout << _GREY "Serializer destructor is called." _END << std::endl;
}

Serializer &Serializer::operator=( const Serializer &rhs) {
	static_cast<void>(rhs);
	std::cout << "Serializer Copy assignment operator called" << std::endl;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
	return  reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return  reinterpret_cast<Data*>(raw);
}
