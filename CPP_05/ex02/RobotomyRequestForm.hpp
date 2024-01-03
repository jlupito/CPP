/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:35:00 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 12:35:10 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string	_target;
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm &rhs );
		RobotomyRequestForm& operator=( RobotomyRequestForm const &rhs );
		~RobotomyRequestForm();

		const 	std::string	getTarget() const;
		void	execute(Bureaucrat const& executor) const;
};

#endif