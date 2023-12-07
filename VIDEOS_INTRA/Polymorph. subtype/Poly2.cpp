/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/07 18:06:36 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter { // A pour abstracte
	
	public:
		virtual void	attack(std::string const & target) = 0;
		// on ne peut pas l implementer, peut pas l instancier = CLASSE ABSTRAITE
		// pour pouvoir etre instanciee, elle devrait implementer les comportements 
		// definis comme abstraits dans la classe parent
		void			sayHello(std::string const & target);
};

class Warrior : public ACharacter {
	
	public:
		virtual void	attack(std::string const & target);
};

void	ACharacter::sayHello(std::string const & target) {
	
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::attack(std::string const & target) {
	
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

class	ICoffeeMaker { // I = Interface
	
	// Interface = si tous les conportements sont abstraits
	// et ne doit pas avoir d attributs
	// interface: pour utiliser des objets derives
	public:
		virtual void		fillWaterTank(IWaterSource * src) = 0;
		virtual ICoffee*	makeCoffee(std::string const & type) = 0;
};

int	main() {

	ACharacter*		a = new Warrior();

	// ACharacter* b = new ACharacter(); // KO because ACharacter is abstract

	a->sayHello("students");
	a->attack("roger");
	
	return 0;
}