/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/16 16:37:23 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	byPtr(std::string* str) { // pointeur
	*str += " and ponies";
}

void	byConstPtr(std::string const * str) { // pointeur sur string constante
	std::cout << *str << std::endl;
}

void	byRef(std::string& str) { // reference
	str += " and ponies";
}

void	byConstRef(std::string const & str) { // reference sur string constante
	std::cout << str << std::endl;
}

int main() {
	
	std::string str = "i like butterflies";
	
	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";
	
	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return 0;

}
