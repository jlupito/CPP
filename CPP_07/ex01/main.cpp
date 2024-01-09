/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:27 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/09 10:29:24 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
    
    int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string str[4] = {"Bob", "Jim", "Coco", "Blabla"};
	
	iter(i, 10, printVal<int>);
	std::cout << std::endl;
	iter(c, 5, printVal<char>);
	std::cout << std::endl;
	iter(str, 4, printVal<std::string>);

    return 0;
}
