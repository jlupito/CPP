/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:54:10 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/20 17:32:41 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(void) {
	
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	// delete tmp;
	delete bob;
	delete me;
	delete src;
	return 0;
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// ICharacter* bob = new Character("bob");
	// AMateria *tmp;
	
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// bob->equip(tmp);
	// delete tmp;
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// bob->equip(tmp);
	// std::cout << "===========================" << std::endl;
	// bob->use(1, *me);
	// me->use(1, *bob);
	// std::cout << "===========================" << std::endl;
	// me->unequip(1);
	// me->equip(tmp);
	// me->unequip(0);
	// me->equip(tmp);
	
	// delete bob;
	// delete me;
	// delete src;
	// delete tmp;
	// return 0;

}