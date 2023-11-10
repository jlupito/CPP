/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:34:45 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/10 16:27:41 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"
#include "Sample2.class.hpp"
# include <iostream>

int	main() {
	
	Sample1 instance1( 'a', 42, 4.2f );
	Sample2 instance2( 'z', 13, 3.14f );

	return 0;
}