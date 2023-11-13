/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:42:40 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/13 15:38:17 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"

Contact::Contact( void ) {
	
	std::cout << "Constructor called" << std::endl;;

	this->setFoo( 0 );
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
	return;
}

Contact::~Contact( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

std::string	Contact::get_firstName() {
	
	return this->_firstName;
}

std::string	Contact::get_lasttName() const {
	
	return this->_lastName;
}

std::string	Contact::get_nickName() const {
	
	return this->_getName;
}

std::string	Contact::get_phNbr() const {
	
	return this->_phoneNumber;
}

std::string	Contact::get_darkSec() const {
	
	return this->_darkSecret;
}

void	Contact::set_firstName() {
	
	std::string input;
	
	while (!input.empty()) {
		std::cout << "Please enter first name: ";
		std::getline(std::cin, input);
		std::cout << "This field is mandatory" << std::endl;
	}
	this->_firstName = input;
	return;
}

void	Contact::set_lastName() {
	
	std::string input;
	
	while (!input.empty()) {
		std::cout << "Please enter last name: ";
		std::getline(std::cin, input);
		std::cout << "This field is mandatory" << std::endl;
	}
	this->_lastName = input;
	return;
}

void	Contact::set_nickName() {
	
	std::string input;
	
	while (!input.empty()) {
		std::cout << "Please enter nickname: ";
		std::getline(std::cin, input);
		std::cout << "This field is mandatory" << std::endl;
	}
	this->_nickName = input;
	return;
}

void	Contact::set_phNbr() {
	
	std::string input;
	
	while (!input.empty()) {
		std::cout << "Please enter phone number: ";
		std::getline(std::cin, input);
		std::cout << "This field is mandatory" << std::endl;
	}
	this->_phoneNumber = input;
	return;
}

void	Contact::set_darkSec() {
	
	std::string input;
	
	while (!input.empty()) {
		std::cout << "Please enter darkest secret: ";
		std::getline(std::cin, input);
		std::cout << "This field is mandatory" << std::endl;
	}
	this->_darkSecret = input;
	return;
}
