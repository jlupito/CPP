/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:42:47 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/28 12:02:39 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook( void ) {
	PhoneBook::_nbContact = 0;
	return;
}

PhoneBook::~PhoneBook( void ) {
	return;
}

void	PhoneBook::add_contact() {
	
	Contact	newContact;

	newContact.set_firstName();
	newContact.set_lastName();
	newContact.set_nickName();
	newContact.set_phNbr();
	newContact.set_darkSec();
	std::cout << "Contact has been saved." << std::endl << std::endl;
	if (this->_nbContact < 8) {
		this->_contact[this->_nbContact % 8] = newContact;
		this->_nbContact += 1;
	}
	else {
		for (int i = 1; i < 8; i++)
			this->_contact[i - 1] = this->_contact[i];
		this->_contact[7] = newContact;
	}
}

void	PhoneBook::search_contact() {
	
	std::string search_input;
	int			search_index;

	if (!this->_nbContact) {
		std::cout << "Your phonebook is empty." << std::endl << std::endl;
		return;
	}
	this->_displayBook();
	while (1) {
		search_input = "";
		std::cout << "Please enter the index of the contact to display [1-"<< this->_nbContact <<"]" 
			<< std::endl;
		std::cout << "> ";
		std::getline(std::cin, search_input);
		std::cout << std::endl;
		if (std::cin.eof())
			PhoneBook::exit();
		if (search_input.length() == 1 && std::isdigit(search_input[0]))
			break;
	}
	std::istringstream iss(search_input);
	iss >> search_index;
	if (search_index > _nbContact || !search_index) {
		std::cout << "This index is not valid." << std::endl 
			<< std::endl;
		PhoneBook::search_contact();
	}
	else
		_contact[search_index - 1].display_contact(search_index);
}

void	PhoneBook::_truncateContact(std::string str) {
	if (str.length() > 10) {
		str.erase(9,str.length() - 10);
		str[9] = '.';
	}
	std::cout << std::setw(10) << str;
}

void	PhoneBook::_displayBook() {
	
	std::cout << "\033[0m╔════════════╦════════════╦════════════╦════════════╗"
        << std::endl << "║ ";
	std::cout << std::setw(10) << "Contact # " << " ║ ";
	std::cout << std::setw(10) << "First name" << " ║ ";
	std::cout << std::setw(10) << "Last name " << " ║ ";
	std::cout << std::setw(10) << "Nickname " << " ║ " << std::endl;

	for (int i = 0; i < PhoneBook::_nbContact ; i++)
	{
		std::cout << "╠════════════╬════════════╬════════════╬════════════╣"
            << std::endl;
		std::cout << "║ " << std::setw(10) << i + 1 << " ║ ";
		PhoneBook::_truncateContact(this->_contact[i].get_firstName());
		std::cout << " ║ ";
		PhoneBook::_truncateContact(this->_contact[i].get_lastName());
		std::cout << " ║ ";
		PhoneBook::_truncateContact(this->_contact[i].get_nickName());
		std::cout << " ║" << std::endl;
	}
	std::cout << "╚════════════╩════════════╩════════════╩════════════╝\033[m"
        << std::endl << std::endl;
	
}

void	PhoneBook::exit() {
	std::cout << "Exited Phonebook, go make new friends now." << std::endl
		<<std::endl;
	std::exit(0);
}