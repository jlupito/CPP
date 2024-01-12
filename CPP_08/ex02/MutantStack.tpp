/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:22:13 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/12 17:38:08 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template< typename T >
MutantStack< T >::MutantStack( void ) : std::stack<T>() {};

template< typename T >
MutantStack< T >::~MutantStack( void ) {};

template< typename T >
MutantStack< T >::MutantStack( const MutantStack &rhs ) : std::stack<T>(rhs) {};

template< typename T >
MutantStack<T> &MutantStack< T >::operator=( const MutantStack &rhs) {
	if (this != rhs)
		this = std::stack<T>::operator=(rhs);
	return (*this);
};

template< typename T >
typename MutantStack< T >::iterator MutantStack< T >::itBegin( void ) {
	return this->c.begin(); //renvoie l'itérateur de debut du conteneur sous-jacent c.
};

template< typename T >
typename MutantStack< T >::iterator MutantStack< T >::itEnd( void ) {
	return this->c.end(); //renvoie l'itérateur de fin du conteneur sous-jacent c.
};