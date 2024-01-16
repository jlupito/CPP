/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:50:48 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/16 17:49:54 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <exception>
#include <algorithm>

class BitcoinExchange {
	
private:
	std::map<std::string,float> _btc;
	std::map<std::string, float>::iterator _findDate(const std::string& date);
	void _checkDate(const std::string& date);
	void _checkRate(const std::string& rate);
	void _printOutput(const std::string& key, const std::string& value);
	bool _isInt(const std::string& str);
	bool _isFloat(const std::string& str);

public:
	BitcoinExchange( void );
	BitcoinExchange( BitcoinExchange const &rhs );
	~BitcoinExchange( void );
	BitcoinExchange &operator=( const BitcoinExchange &rhs);

	void checkExchange(char *str);

	class FileException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class DateException {
	private:
		std::string _errorMessage;
	public:
	    DateException(const std::string& message) : _errorMessage("Error: bad input => " + message) {}
		virtual const char* what() const throw();
	};

	class RateException {
	private:
		std::string _errorMessage;
	public:
	    RateException(const std::string& message) : _errorMessage("Error: " + message) {}
		virtual const char* what() const throw();
	};
};