/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:27 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/15 18:21:40 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	printVal(BitcoinExchange &btc) {
	std::cout << "ici" << std::endl;
	std::map<std::string, float> tmp = btc.getBtcExch();
	std::map<std::string, float>::iterator it;
	for (it = tmp.begin(); it != tmp.end(); ++it)
		 std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
}

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "The program takes [only / at least] one argument." << std::endl;
		return 1;
	}
	std::ifstream ifs(av[1]);
	if (!ifs.is_open() or ifs.peek() == std::ifstream::traits_type::eof()) {
		std::cout << "Check file permissions or content." << std::endl;
		return 1;
	}
	try {
		BitcoinExchange btc;
		checkExchange(btc, ifs);
		ifs.close();
		printVal(btc);
	}
	catch (std::exception& e) { 
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
