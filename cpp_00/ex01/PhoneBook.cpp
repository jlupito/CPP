/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:42:47 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/14 18:21:20 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
		this->_contact[this->_nbContact] = newContact;
		this->_nbContact += 1;
	}
	else {		
		this->_contact[this->_nbContact % 8] = newContact;
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
	search_index = std::stoi(search_input);
	_contact[search_index - 1].display_contact(search_index);
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
		// PhoneBook::print_truncate(this->_contact[i].get_firstName());
		std::cout << (this->_contact[i].get_firstName());
		std::cout << " ║ ";
		// PhoneBook::print_truncate(this->_contact[i].get_lastName());
		std::cout << (this->_contact[i].get_lastName());
		std::cout << " ║ ";
		// PhoneBook::print_truncate(this->_contact[i].get_nickName());
		std::cout << (this->_contact[i].get_nickName());
		std::cout << " ║" << std::endl;
	}
	std::cout << "╚════════════╩════════════╩════════════╩════════════╝\033[m"
        << std::endl << std::endl;
	
}

void	PhoneBook::exit() {
	std::cout << "Exited Phonebook, go make new friends now." << std::endl;
	std::exit(0);
}