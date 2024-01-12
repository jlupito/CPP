/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:27 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/12 17:18:29 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void) {

	Span myRange(11);
	std::srand(time(0)); 

	std::vector<int> myRange2(5, 4);
	
	try {
		for (int i = 0; i < 6; i++) {
			int randomVal = std::rand();
			myRange.addNumber(randomVal);
		}
		myRange.addNumber(myRange2);
		std::cout << "shortest span is: " << myRange.shortestSpan() << std::endl;
		std::cout << "longest span is: " << myRange.longestSpan() << std::endl;

		Span myRange3(myRange);
		std::cout << "shortest span is: " << myRange3.shortestSpan() << std::endl;
		std::cout << "longest span is: " << myRange3.longestSpan() << std::endl;
	}
	catch (std::exception& e) { 
		std::cout << e.what() << std::endl; 
	}
	
	return 0;
}


	// Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	// return 0;