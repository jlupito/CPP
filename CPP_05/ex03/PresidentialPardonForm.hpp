/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:35:00 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 13:38:49 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string	_target;
		
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &rhs );
		PresidentialPardonForm& operator=( PresidentialPardonForm const &rhs );
		~PresidentialPardonForm();

		const 	std::string	getTarget() const;
		void	execute(Bureaucrat const& executor) const;
};

#endif
