/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/08 10:49:12 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// virtual : le limkage devient dynamique et non plus statique
// a la compilation on utilise le type de la variable pour
// savoir son comportement et ca ne change plus apres.
// rend l appel de fonction dynamique pour trouver le type reel

// fonction membre virtuelle = METHODE !!!!!!!

class Character {
	
	public:
		virtual void	sayHello(std::string const & target);
};

class Warrior : public Character {
	
	public:
		virtual void	sayHello(std::string const & target);
};

class Cat {
	
	//[...]
};

void	Character::sayHello(std::string const & target) {
	
	std::cout << "F*** off " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const & target) {
	
	std::cout << "F*** off " << target << ", I don't like you !" << std::endl;
}

int	main() {

	Warrior* 	a = new Warrior(); // OK un warrior est un warrior
	Character*	b = new Warrior(); // OK un warrior est un character
	// Warrior*	c = new Character(); KO un Character n est pas forcement un warrior
	// Character*	d = new Cat(); KO cat nest pas un character

	a->sayHello("students"); // va dire hello comme un warrior

	b->sayHello("students"); // va dire hello comme un character
	
	
}