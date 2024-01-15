/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:50:37 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/15 18:23:34 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::ifstream ifs("data.csv");
	if (!ifs.is_open() or ifs.peek() == std::ifstream::traits_type::eof())
		throw FileProblemException();
	std::string line;
	while(std::getline(ifs, line)) {
		size_t posComa = line.find(',');
		if (posComa != std::string::npos)
			_btc[line.substr(0, posComa)] = strtof((line.substr(posComa + 1)).c_str(), NULL);
	}
	ifs.close();
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &rhs ) {
	*this = rhs;
}

BitcoinExchange::~BitcoinExchange( void ) {}

BitcoinExchange &BitcoinExchange::operator=( const BitcoinExchange &rhs) {
	(void)rhs;
	if (this != &rhs)
		_btc = rhs._btc;
	return *this;
}

std::map<std::string,float> BitcoinExchange::getBtcExch() const {
	return (_btc);
}