/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/28 12:48:22 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av) {

	if (ac != 4 || !av[2][0]) {
		std::cout << "Error, arguments need to be a filename and two non-empty strings!" << std::endl;
	}
	else {
		replace(av[1], av[2], av[3]);
	}
	return 0;
}