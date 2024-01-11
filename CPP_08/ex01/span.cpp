/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:07:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/11 18:19:39 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( size_t N ) : _size(N) {
    return;
}

Span::Span( Span const &rhs ) {
    _size = rhs._size;
    _span = rhs._span;
    return;   
}

Span::~Span( void ) {}

Span &Span::operator=( const Span &rhs) {
    if (this != &rhs) {
        _size = rhs._size;
        _span = rhs._span;
    }
    return *this;
}

void Span::addNumber( int nb ) {
    if (_span.size() == _size)
        throw FullException();
    else
        _span.push_back(nb);
}

size_t Span::shortestSpan( void ) const {
    if (!_span.size() or _span.size() == 1)
        throw NoDistanceException();
    else {
        
    }
}

size_t Span::longestSpan( void ) const {
    if (!_span.size() or _span.size() == 1)
        throw NoDistanceException();
    else {
        size_t minElement = *std::min_element(_span.begin(), _span.end());
        size_t maxElement = *std::max_element(_span.begin(), _span.end());
        return maxElement - minElement;
    }
}
