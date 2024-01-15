/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:50:48 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/15 18:22:52 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cstdlib>

class BitcoinExchange {
	
private:
	std::map<std::string,float> _btc;

public:
	BitcoinExchange( void );  // constructeur par defaut param
	BitcoinExchange( BitcoinExchange const &rhs ); // constructeur de recopie
	~BitcoinExchange( void ); //destructeur
	BitcoinExchange &operator=( const BitcoinExchange &rhs); // operateur d affectation

	std::map<std::string,float> getBtcExch() const;

	class FileProblemException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Could not open CSV file.");
		}
	};
};