/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:07:41 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/15 11:08:08 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( size_t N ) : _size(N) {}

Span::Span( Span const &rhs ) {
    _size = rhs._size;
    _span = rhs._span;   
}

Span::~Span( void ) {}

Span &Span::operator=( const Span &rhs) {
    if (this != &rhs) {
        _size = rhs._size;
        _span = rhs._span;
    }
    return *this;
}

int Span::getVal( int index ) {
    return this->_span[index];
}

void Span::addNumber( int nb ) {
    if (_span.size() == _size)
        throw FullException();
    _span.push_back(nb);
}

void Span::addNumber( std::vector<int> tabAdd ) {
    if (_span.size() + tabAdd.size() > _size)
        throw FullException();
    _span.insert(_span.end(), tabAdd.begin(), tabAdd.end());

}

size_t Span::shortestSpan( void ) {
    if (!_span.size() or _span.size() == 1)
        throw NoDistanceException();
    std::vector<int> copy = this->_span;
    std::sort(copy.begin(), copy.end());
    int ret = std::abs(copy[1] - copy[0]);
    for (unsigned long i = 0; i < copy.size() - 1; i++) {
        if (std::abs(copy[i + 1] - copy[i]) < ret)
            ret = std::abs(copy[i + 1] - copy[i]);
    }
    return ret;
}

size_t Span::longestSpan( void ) {
    if (!_span.size() or _span.size() == 1)
        throw NoDistanceException();
    std::sort(_span.begin(), _span.end());
    int ret = std::abs(_span[_span.size() - 1] - _span[0]);
    std::cout << "[min Val is: " << _span[0] << "]" << std::endl;
    std::cout << "[max Val is: " << _span[_span.size() - 1] << "]" << std::endl;
    return ret;
}
