/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:34:57 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 12:35:20 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string	_target;
		
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm &rhs );
		ShrubberyCreationForm& operator=( ShrubberyCreationForm const &rhs );
		~ShrubberyCreationForm();

		const 	std::string	getTarget() const;
		void	execute(Bureaucrat const& executor) const;
};

#endif