/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:08:51 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/15 17:19:49 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

void	test1() {
	try {
		//Do some stuff here
		if (/* there is an error */) {
			throw std::exception();
		}	
		else {
			//Do some more stuff
		}
	}
	catch (std::exception e) {
		//handle the error here
	}
}

void	test2() {
		//Do some stuff here
		if (/* there is an error */) {
			throw std::exception();
		}	
		else {
			//Do some more stuff
		}
}

void	test3() {
	try {
			test2();
		}	
	catch (std::exception& e) {
		//handle the error here
	}
}

void test4() {
	class PEBKACException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("problem exists between keyboard and chair");
			}
	};
	try {
		test3();
	}
	catch (PEBKACException& e) {
		// Handle the fact that the user is an idiot
	}
	catch (std::exception& e) {
		// Handle other exceptions that are like std::exception
	}
}