/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:50:37 by jarthaud          #+#    #+#             */
/*   Updated: 2024/02/06 15:07:02 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::ifstream ifs("data.csv");
	if (!ifs.is_open() or ifs.peek() == std::ifstream::traits_type::eof())
		throw FileException();
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
		this->_btc = rhs._btc;
	return *this;
}

void	BitcoinExchange::checkExchange(char *str) {
	std::ifstream ifs(str);
	std::string input = str;
	if (!ifs.is_open() or ifs.peek() == std::ifstream::traits_type::eof())
		throw FileException();
	std::string line;
	int flag = 0; 
	while(std::getline(ifs, line)) {
		if (line == "date | value" && !flag) {
			std::getline(ifs, line);
			flag = 1;
		}
		size_t posPipe = line.find('|');
		try {
			_checkDate(line.substr(0, posPipe - 1));
			_checkRate(line.substr(posPipe + 2));
			_printOutput((line.substr(0, posPipe - 1)), (line.substr(posPipe + 1)));	
		}
		catch (BitcoinExchange::DateException& e) { 
			std::cout << e.what() << std::endl;
		}
		catch (BitcoinExchange::RateException& e) { 
			std::cout << e.what() << std::endl;
		}	
	}
	ifs.close();
}

void	BitcoinExchange::_checkDate(const std::string& date) {
	int year, month, day;
	if (date.size() != 10)
		throw DateException(date);
	if (std::sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		throw DateException(date);
	if ((month <= 0 || month >= 13) || (day <= 0 || day >= 32) || (month == 2 && day > 29))
		throw DateException(date);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && (day <= 0 || day >= 31))
		throw DateException(date);
	if(month == 2) {
        if(day == 29) {
            if(year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
			throw DateException(date);
        }
    }
}

void	BitcoinExchange::_checkRate(const std::string& rate) {
	std::istringstream iss(rate);
    float value;
	if (!_isInt(rate) and !_isFloat(rate)) {
		throw RateException("bad input => " + rate);
	}
    if (iss >> value) {
        if (value >= 0.0f && value <= 1000.0f) {
            return;
        }
		else if (value > 1000.0f)
			throw RateException("too large a number.");
		else if (value < 0.0f)
			throw RateException("not a positive number.");
    }
    throw RateException("bad input => " + rate);
}

std::map<std::string, float>::iterator BitcoinExchange::_findDate(const std::string& date) {
    std::map<std::string, float>::iterator it = _btc.find(date);
    if (it != _btc.end())
        return it;
    it = _btc.lower_bound(date);
    if (it != _btc.end())
        return it;
    return (--it);
}

void	BitcoinExchange::_printOutput(const std::string& key, const std::string& value) {
	std::map<std::string, float>::iterator it;
	for (it = _btc.begin(); it != _btc.end(); ++it) {
		if (it->first == key) {
			std::cout << key << " =>" << value << " = " 
					  << (it->second * strtof(value.c_str(), NULL)) << std::endl;
			return;
		}
	}
	std::map<std::string, float>::iterator next = _findDate(key);
	std::cout << key << " =>" << value << " = " 
				<< next->second * strtof(value.c_str(), NULL) << std::endl;
	return;
}

bool BitcoinExchange::_isInt(const std::string& str) {
	size_t	i = 0;
	if (str[i] == '+' or str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (i == str.length())
		return true;
	return false;
}

bool BitcoinExchange::_isFloat(const std::string& str) {
	unsigned long i = 0;
	if (str[i] == '+' or str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (str[i] != '.')
		return false;
	else {
		i++;
		while (isdigit(str[i]))
			i++;
	}
	if ((str[i] == 'f' and i == str.length() - 1) or i == str.length() - 1)
		return true;
	return false;
}

const char *BitcoinExchange::FileException::what() const throw() {
	return ("Error: could not open file.");
}

const char *BitcoinExchange::DateException::what() const throw() {
	return this->_errorMessage.c_str();
}

const char *BitcoinExchange::RateException::what() const throw() {
	return this->_errorMessage.c_str();
}
