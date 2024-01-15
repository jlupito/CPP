/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:27 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/15 11:15:34 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void) {

	Span myRange(10005);
	std::srand(time(0)); 
	
	try {
		for (int i = 0; i < 6; i++) {
			int randomVal = std::rand();
			myRange.addNumber(randomVal);
			// std::cout << "myrange[i] val: " << myRange.getVal(i) << std::endl;
		}
		std::cout << "---- First range (add numbers) ----" << std::endl;
		std::cout << "shortest span is: " << myRange.shortestSpan() << std::endl;
		int longest = myRange.longestSpan();
		std::cout << "longest span is: " << longest << std::endl;
	}
	
	catch (std::exception& e) { 
		std::cout << e.what() << std::endl; 
	}
	try {
		std::vector<int> myRange2(5, 4);
		myRange.addNumber(myRange2);
		
		std::cout << "\n---- First range (add range2) ----" << std::endl;
		std::cout << "shortest span: " << myRange.shortestSpan() << std::endl;
		int longest = myRange.longestSpan();
		std::cout << "longest span: " << longest << std::endl;
	}
	catch (std::exception& e) { 
		std::cout << e.what() << std::endl; 
	}
	try {
		Span myRange3(myRange);
		std::cout << "\n---- Third range (copy range2) ----" << std::endl;
		std::cout << "shortest span: " << myRange3.shortestSpan() << std::endl;
		int longest = myRange3.longestSpan();
		std::cout << "longest span: " << longest << std::endl;
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