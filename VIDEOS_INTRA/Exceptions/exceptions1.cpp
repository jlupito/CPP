/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:08:51 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/20 17:50:22 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

// A l interieur du bloc TRY, lorsqu on arrive sur une instruction THROW:
// -> on saute toutes les instructions suivantes.
// -> on appelle le destructeur de tous les objets déclarés a l interieur du bloc.
// -> on cherche le bloc CATCH correspondant a l objet trouvé.
// -> on execute ce qui est ds le bloc CATCH, puis reprend l exec apres CATCH.
// !!!! l'exec reprend apres le bloc CATCH pas apres le bloc THROW.

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