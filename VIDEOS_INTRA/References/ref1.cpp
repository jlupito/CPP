/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/16 17:00:29 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// reference : pointeur constant toujours dereference et qui est non null.

int main() {
	
	int		numberOfBalls = 42;
	
	int*	ballsPtr = &numberOfBalls; // poiteur int initiatilise sur l adresse de numberOfBalls
	int&	ballsRef = numberOfBalls; 
		// jaffecte une reference sur la variable, 
		// je ne peux pas changer ce sur quoi ma reference pointe (constante) 
		// un peu comme un alias a numberOfBalls
		// une ref cest comme un pointeur toujours dereference
	//int&	ballsRef2; par ex, ca cest FAUX car ne peut pas etre null

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;

	return 0;

}
