/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlupito <jlupito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:42:26 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/24 15:45:15 by jlupito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	replace(std::string infile, std::string s1, std::string s2) {
	
	std::ifstream inStream;
	std::ofstream outStream;
	std::string outfile = infile + ".replace";
	std::string content;

	inStream.open (infile.c_str(), std::ifstream::in);
	outStream.open (outfile.c_str(), std::ofstream::out);

	if (!inStream.is_open() || !outStream.is_open()) {
		std::cout << "Check files permissions." << std::endl;
		return 1;
	}

	if (inStream.peek() == std::ifstream::traits_type::eof()) {
        std::cout << "The file is empty." << std::endl;
		return 1;
	}
	
	
	std::getline(inStream, content, '\0');
	size_t pos;
	
		while ((pos = content.find(s1)) != std::string::npos) {
		content.erase(pos, s1.length());
		content.insert(pos, s2);
	}
	outStream << content;
	 
	inStream.close ();
	outStream.close ();
	
	return 0;
}

