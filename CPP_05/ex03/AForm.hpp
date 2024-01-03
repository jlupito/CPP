/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:05:04 by jlupito           #+#    #+#             */
/*   Updated: 2024/01/03 13:46:51 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <typeinfo>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        std::string const   _name;
        bool                _signed;
        int const           _gradeToSign;
        int const           _gradeToExec;
    
    public:
        AForm( void );  // constructeur par defaut
		AForm( std::string name, int const gradeToSign, int const gradeToExec ); // constructeur par defaut
		AForm( AForm const &rhs ); // constructeur de recopie
		virtual ~AForm( void ); //destructeur
		AForm &operator=( const AForm &rhs); // operateur d affectation

        std::string 		getName() const;
        bool        		getSigned() const;
        int         		getGradeToSign() const;
        int         		getGradeToExec() const;
        void        		beSigned( Bureaucrat );
		virtual void		execute(Bureaucrat const & executor) const = 0;

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

std::ostream &operator<<( std::ostream &out, AForm const &rhs );

#endif