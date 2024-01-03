/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:35:00 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 13:50:25 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#define _GREY 	"\033[90m"
#define _END "\1\033[0m\2"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Random") {
	std::cout << _GREY "Default Shrubbery constructor is called." _END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << _GREY "Default Shrubbery constructor w/ param is called." _END << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &rhs )
: AForm(rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToExec()), _target(rhs.getName()) {
	std::cout << _GREY "Copy Shrubbery constructor is called." _END << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs ) {
	std::cout << _GREY "Shrubbery assignment operator is called.." _END << std::endl;
	if (this != &rhs) {
        this->_target = rhs.getTarget();
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << _GREY "Shrubbery destructor is called." _END << std::endl;
}

const 	std::string	ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (this->getSigned() && executor.getGrade() <= this->getGradeToExec()) {
		std::ofstream	outfile;
		outfile.open((this->_target + "_shrubbery").c_str());
		outfile << "			&&& &&  & &&          \n"
				<< "		&& &\\/&\\|& ()|/ @, &&     \n"
				<< "		&\\/(/&/&||/& /_/)_&/_&    \n"
				<< "	&() &\\/&|()|/&\\/ \'%\" & ()   \n"
				<< "	&_\\_&&_\\ |& |&&/&__%_/_& &&   \n"
				<< "	&&   && & &| &| /& & % ()& /&&\n"
				<< "	()&_---()&\\&\\|&&-&&--%---()~  \n"
				<< "		&&     \\|||				  \n"
				<< "				|||				  \n"
				<< "				|||				  \n"
				<< "				|||				  \n"
				<< "		, -=-~  .-^- _              " << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}