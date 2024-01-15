/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:27 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/15 10:45:29 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
    
    std::vector<int> v;
	std::list<int> l;

	for (int i = 0; i < 10; i++) {
		std::cout << "value pushed: " << i << std::endl;
		v.push_back(i);
		l.push_back(i);
	}
	try {
		std::vector<int>::iterator ite_v;
		
		ite_v = easyfind(v, 9);
		if (ite_v != v.end())
			std::cout << "OK" << std::endl;
			
		ite_v = easyfind(v, 10);
		if (ite_v != v.end())
			std::cout << "OK" << std::endl;
	}
    catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::list<int>::iterator ite_l;
		
		ite_l = easyfind(l, 4);
		if (ite_l != l.end())
			std::cout << "OK" << std::endl;
			
		ite_l = easyfind(l, 42);
		if (ite_l != l.end())
			std::cout << "OK" << std::endl;
	}
    catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
