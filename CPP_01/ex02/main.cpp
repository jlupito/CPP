/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:44 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/20 15:08:29 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR =  &str;
	std::string& stringREF =  str;
	
	std::cout << "Adresse de string: " << &str << std::endl;
	std::cout << "Adresse dans PTR: " << stringPTR << std::endl;
	std::cout << "Adresse dans REF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Valeur de string: " << str << std::endl;
	std::cout << "Valeur pointee par PTR: " << *stringPTR << std::endl;
	std::cout << "Valeur pointee par REF: " << stringREF << std::endl;

	return 0;

}