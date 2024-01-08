/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:27 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/08 12:21:16 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data* ptr;
	uintptr_t raw;
	Data* ptrData;

	ptr = new Data;

	std::cout << "Data: " << ptr << std::endl;
	raw = Serializer::serialize(ptr);
	std::cout << "Raw data: " << raw << std::endl;
	ptrData = Serializer::deserialize(raw);
	std::cout << "Deserialized data: " << ptrData << std::endl;

	delete ptr;

	return 0;
}
