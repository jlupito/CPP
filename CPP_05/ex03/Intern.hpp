/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:22:45 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 15:28:35 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
#include <typeinfo>

class Intern {
	public:
		Intern( void );  // constructeur par defaut
		Intern( Intern const &rhs ); // constructeur de recopie
		~Intern( void ); //destructeur
		Intern &operator=( const Intern &rhs); // operateur d affectation
		
		AForm*	makeForm(std::string name, std::string target);
	
		class UnexistingFormException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("The form does not exist!");
				}
			};
};

#endif