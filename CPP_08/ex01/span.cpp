/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:07:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/11 17:51:51 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ) : _size(0) {
    return;
}

Span::Span( size_t N ) : _size(N) {
    return;
}

Span::Span( Span const &copy ) {}

Span::~Span( void ) {}

Span &Span::operator=( const Span &rhs) {}

void Span::addNumber( void ) {}

size_t Span::shortestSpan() const {}

size_t Span::longestSpan() const {}
