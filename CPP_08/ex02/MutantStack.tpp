/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:22:13 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/12 15:45:15 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template< typename T >
MutantStack< T >::MutantStack( void ) : std::stack<T>() {}

template< typename T >
MutantStack< T >::~MutantStack( void ) {}

template< typename T >
MutantStack< T >::MutantStack( const MutantStack &rhs ) : std::stack<T>(src) {
	if (this != rhs)
		this = std::stack<T>::operator=(rhs);
	return (*this);
}

template< typename T >
MutantStack &MutantStack< T >::operator=( const MutantStack &rhs) {}

template< typename T >
iterator MutantStack< T >::itBegin( void ) {
	return this->c.begin(); //renvoie l'itérateur de debut du conteneur sous-jacent c.
}

template< typename T >
iterator MutantStack< T >::itEnd( void ) {
	return this->c.end(); //renvoie l'itérateur de fin du conteneur sous-jacent c.
}