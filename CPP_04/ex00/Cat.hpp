/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:56:55 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/08 16:39:04 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <cmath>

class Cat : public Animal {
    
public:

	Cat( void );  // constructeur par defaut
	Cat( Cat const &copy ); // constructeur de recopie
	~Cat( void ); //destructeur
	
	Cat &operator=( const Cat &copy); // operateur d affectation

	virtual void makeSound( void ) const;

private:

	Brain	*_brain;
    
};

#endif