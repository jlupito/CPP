/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:31:50 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/11 11:45:48 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
Array< T >::Array(void) { 
	// std::cout << _GREY "Default Array constructor is called." _END << std::endl;
	this->_size = 0;
	this->_array = new T[this->_size];
}

template< typename T >
Array< T >::Array(unsigned int n) : _size(n) { 
	if (n < 0)
		throw OutOfRangeException();
	// std::cout << _GREY "Default Array constructor w/ param is called." _END << std::endl;
	this->_array = new T[_size]; 
}

template< typename T >
Array< T >::~Array( void ) {
	// std::cout << _GREY "Default Array destructor is called." _END << std::endl;
	if (this->_size >= 0)
		delete [] this->_array;
	this->_array = NULL;		
}

template< typename T >
Array< T >::Array( const Array< T > &rhs ) {
	// std::cout << _GREY "Copy Array constructor is called." _END << std::endl;
	this->_array = new T[rhs.size()];
	this->_size = rhs.size();
	for (unsigned int i = 0; i < rhs.size(); i++)
		this->_array[i] = rhs[i];
}

template< typename T >
Array< T >  &Array< T >::operator=( const Array< T > &rhs) {
	// std::cout << _GREY "Array assignment =operator is called." _END << std::endl;
	delete[] this->_array;
    this->_array = new T[rhs.size()];
    this->_size = rhs.size();
    for (unsigned int i = 0; i < this->_size; i++) 
        this->_array[i] = rhs[i];
    return *this;
}

template< typename T >
T  &Array< T >::operator[]( unsigned int index ) {
	// std::cout << _GREY "Array assignment []operator is called." _END << std::endl;
	if (index >= this->_size) 
        throw OutOfRangeException();
    return this->_array[index];
}

template< typename T >
const T  &Array< T >::operator[]( unsigned int index ) const {
	// std::cout << _GREY "Array assignment []operator is called." _END << std::endl;
	if (index >= this->_size) 
        throw OutOfRangeException();
    return this->_array[index];
}

template< typename T >
unsigned int Array< T >::size( void ) const {
	return this->_size;
}