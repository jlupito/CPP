/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:52:05 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/03 16:02:55 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void) {
	
	int a = 42; // valeur de reference

	double b = a; // cast conversion implicite
	double c = (double)a; // cast conversion explicite

	double d = a; // implicit promotion -> la conversion va gagner en precision
	int	e = d; // implicit demotion -> on perd en precision attention
	int f = (int)d; // explicit demotion -> cest bien ce comportement que l on voulait
}