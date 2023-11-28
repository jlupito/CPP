/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:42:40 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/28 12:20:06 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact( void ) {
	Contact::_firstName = "";
    Contact::_lastName = "";
    Contact::_nickName = "";
    Contact::_phoneNumber = "";
    Contact::_darkSecret = "";
	return;
}

Contact::~Contact( void ) {
	return;
}

std::string	Contact::get_firstName() const {
	return this->_firstName;
}

std::string	Contact::get_lastName() const {
	return this->_lastName;
}

std::string	Contact::get_nickName() const {
	return this->_nickName;
}

std::string	Contact::get_phNbr() const {
	return this->_phoneNumber;
}

std::string	Contact::get_darkSec() const {
	return this->_darkSecret;
}

void	Contact::set_firstName() {
	
	std::string input = "";
	
	while (Contact::_isBlank(input)) {
		std::cout << "Please enter first name" << std::endl << "> ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (std::cin.eof()) {
			std::cout << std::endl;
			PhoneBook::exit();
		}
		if (input.empty() || Contact::_isBlank(input))
			std::cout << "This field is mandatory. ";
	}
	if (!Contact::_validName(input)) {
		std::cout << "This isn't valid my friend. ";
		return Contact::set_firstName();
	}
	this->_firstName = input;
	return;
}

void	Contact::set_lastName() {
	
	std::string input = "";
	
	while (Contact::_isBlank(input)) {
		std::cout << "Please enter last name" << std::endl << "> ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (std::cin.eof()) {
			std::cout << std::endl;
			PhoneBook::exit();
		}
		if (input.empty() || Contact::_isBlank(input))
			std::cout << "This field is mandatory. ";
	}
	if (!Contact::_validName(input)) {
		std::cout << "This isn't valid my friend. ";
		return Contact::set_lastName();
	}
	this->_lastName = input;
	return;
}

void	Contact::set_nickName() {
	
	std::string input;
	
	while (Contact::_isBlank(input)) {
		std::cout << "Please enter nickname" << std::endl << "> ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (std::cin.eof()) {
			std::cout << std::endl;
			PhoneBook::exit();
		}
		if (input.empty() || Contact::_isBlank(input))
			std::cout << "This field is mandatory. ";
	}
	this->_nickName = input;
	return;
}

void	Contact::set_phNbr() {
	
	std::string input = "";
	
	while (Contact::_isBlank(input)) {
		std::cout << "Please enter phone number" << std::endl << "> ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (std::cin.eof()) {
			std::cout << std::endl;
			PhoneBook::exit();
		}
		if (input.empty() || Contact::_isBlank(input))
			std::cout << "This field is mandatory. ";
	}
	if (!Contact::_validPhoneNbr(input)) {
		std::cout << "This isn't valid my friend. ";
		return Contact::set_phNbr();
	}
	this->_phoneNumber = input;
	return;
}

void	Contact::set_darkSec() {
	
	std::string input;
	
	while (Contact::_isBlank(input)) {
		std::cout << "Please enter darkest secret" << std::endl << "> ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (std::cin.eof()) {
			std::cout << std::endl;
			PhoneBook::exit();
		}
		if (input.empty() || Contact::_isBlank(input))
			std::cout << "This field is mandatory. ";
	}
	this->_darkSecret = input;
	return;
}

bool	Contact::_validPhoneNbr( std::string str ) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i]) && str[i] != '+' && str[i] != '-' && !std::isspace(str[i]))
			return false;
	}
	return true;
}

bool	Contact::_validName( std::string str ) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isalpha(str[i]) && str[i] != '-' && str[i] != '.' && !std::isspace(str[i]))
			return false;
	}
	return true;
}

bool Contact::_isBlank( std::string& str ) {
    if (str.empty()) {
        return true;
    }
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isspace(str[i])) {
            return false;
        }
    }
    return true;
}

void 	Contact::display_contact( int index ) {
	
	std::cout << "Contact #: " << index << std::endl;
    std::cout << "First Name: " << this->_firstName << std::endl;
    std::cout << "Last Name: " << this->_lastName << std::endl;
    std::cout << "Nickname: " << this->_nickName << std::endl;
    std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << this->_darkSecret << std::endl << std::endl;
}
