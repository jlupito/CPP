/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:11:08 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/14 18:08:42 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook   PhoneBook;
    
    while (1) {
        std::string input = "";
        std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
        std::cout << "> ";
        std::getline( std::cin, input );
        std::cout << std::endl;

        if ( input == "ADD" ) {
            PhoneBook.add_contact();
        }
        else if ( input == "SEARCH" ) {
            PhoneBook.search_contact();
        }
        else if ( input == "EXIT" || std::cin.eof()) {
            PhoneBook.exit();
        }
    }
    return 0;
}