/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:34 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/31 11:32:57 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#define _GREY 	"\033[90m"
#define _END "\1\033[0m\2"

ScalarConverter::ScalarConverter() {
	std::cout << _GREY "Default Scalar constructor is called." _END << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter const &rhs ) {
	std::cout << _GREY "Copy Scalar constructor is called." _END << std::endl;
	*this = rhs;
}

ScalarConverter::~ScalarConverter() {
	std::cout << _GREY "Scalar destructor is called." _END << std::endl;
}

ScalarConverter &ScalarConverter::operator=( const ScalarConverter &rhs) {
	static_cast<void>(rhs);
	std::cout << "Scalar copy assignment operator called" << std::endl;
	return *this;
}
		
void ScalarConverter::convert(const std::string& str) {
	int type = -1;
	bool(*findType[4])(std::string str) = {isChar, isInt, isFloat, isDouble};
	for (int i = 0; i < 4; i++) {
		if (findType[i](str) == true) {
			type = i;
			break;}}
	char   c = 0;
	int    i = 0;
	float  f = 0.0f;
	double d = 0.0;
	switch (type) {
	case 0:
		c = str[0];
		convertChar(c);
		break;
	case 1:
		i = atoi(str.c_str());
		convertInt(i);
		break;
	case 2:
		f = strtof(str.c_str(), NULL);
		convertFloat(f, str);
		break;
	case 3:
		f = strtod(str.c_str(), NULL);
		convertDouble(d, str);
		break;
	default:
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
		break;
	}
}

bool ScalarConverter::isChar(std::string str) {
	if (str.length() == 1 and !isdigit(str[0]))
		return true;
	return false;
}

bool ScalarConverter::isInt(std::string str) {
	size_t	i = 0;
	if (str[i] == '+' or str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (i == str.length())
		return true;
	return false;
}

bool ScalarConverter::isFloat(std::string str) {
	unsigned long i = 0;
	if (str == "-inff" or str == "+inff" or str == "nanf")
		return true;
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
	if (str[i] == 'f' and i == str.length() - 1)
		return true;
	return false;
}

bool ScalarConverter::isDouble(std::string str) {
	unsigned long i = 0;
	if (str == "-inf" or str == "+inf" or str == "nan")
		return true;
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
	if (i == str.length())
		return true;
	return false;
}

void ScalarConverter::convertChar(char c) {
	printChar(c);
	printInt(static_cast<int>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

void ScalarConverter::convertInt(int i) {
	if (i < 256 and isprint(i))
		printChar(static_cast<char>(i));
	else
		std::cout << "char : Non displayable" << std::endl;
	printInt(i);
	printFloat(static_cast<float>(i));
	printDouble(static_cast<double>(i));
}

void ScalarConverter::convertFloat(float f, std::string str) {
	if (str == "-inff" or str == "+inff" or str == "nanf") {
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str << std::endl;
		str.erase(str.length() - 1,1);
		std::cout << "double : " << str << std::endl;
	}
	else {
		printChar(static_cast<char>(f));
		printInt(static_cast<int>(f));
		printFloat(f);
		printDouble(static_cast<double>(f));
	}
}

void ScalarConverter::convertDouble(double d, std::string str) {
	if (str == "-inf" or str == "+inf" or str == "nan") {
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : "<< str + 'f' << std::endl;
		std::cout << "double : " << str << std::endl;
	}
	else {
		printChar(static_cast<char>(d));
		printInt(static_cast<int>(d));
		printFloat(static_cast<float>(d));
		printDouble(d);
	}
}

void ScalarConverter::printInt(int i) {
	std::cout << "int : " << i << std::endl;
}

void ScalarConverter::printFloat(float f) {
	std::cout << "float : " << f << ".0f" << std::endl;
}

void ScalarConverter::printDouble(double d) {
	std::cout << "double : " << d << ".0" << std::endl;
}

void ScalarConverter::printChar(char c) {
	std::cout << "char : '" << c << "'" << std::endl;
}