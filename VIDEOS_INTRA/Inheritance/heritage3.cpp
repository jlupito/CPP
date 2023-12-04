/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage3.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/04 16:36:37 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Quadruped { // can access name, run() and legs
	
	private:
		std::string		name; // seulement accessible par un objet quadrupede

	protected:
		leg		legs[4]; // accessible par quadrupede ou objet derive'

	public:
		void	run(); // accessible de partout
		
};

class Dog : public Quadruped { // peut acceder seulement a legs et run()
	
};

int main() { // peut seulement acceder a run()
}
