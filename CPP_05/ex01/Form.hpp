/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:05:04 by jlupito           #+#    #+#             */
/*   Updated: 2023/12/29 15:05:02 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <typeinfo>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const   _name;
        bool                _signed;
        int const           _gradeToSign;
        int const           _gradeToExec;
    
    public:
        Form( void );  // constructeur par defaut
		Form( std::string name, int const gradeToSign, int const gradeToExec ); // constructeur par defaut
		Form( Form const &rhs ); // constructeur de recopie
		~Form( void ); //destructeur
		Form &operator=( const Form &rhs); // operateur d affectation

        std::string getName() const;
        bool        getSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExec() const;
        void        beSigned( Bureaucrat );

        class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade is too high!");
			}
		};
		class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade is too low!");
			}
		};
		class AlreadySignedException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Form is already signed!");
			}
		};
        
};

std::ostream &operator<<( std::ostream &out, Form const &rhs );

#endif