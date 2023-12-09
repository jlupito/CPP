/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:20:37 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/09 11:16:03 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default Brain constructor is created." << std::endl;
}

Brain::Brain( Brain const &copy ) {
	std::cout << "Copy Brain constructor is created." << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain::~Brain( void ) {
	std::cout << "Default Brain destructor is called." << std::endl;
}

Brain &Brain::operator=( const Brain &copy) {
	std::cout << "Brain assignment operator is called." << std::endl;
	if (this != &copy) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}