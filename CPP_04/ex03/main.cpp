/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:54:10 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/20 18:03:24 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

// int	main(void) {
	
// 	MateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	// delete tmp;
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	// delete tmp;
// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
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

// }

int main()
{

    // std::cout << "\n---------------- ";
    // std::cout << " FIRST TEST ";
    // std::cout << " ----------------\n" << std::endl;
    std::cout << "\n---------------- ";
    std::cout << " NEW PLAYER ";
    std::cout << " ----------------\n" << std::endl;
    IMateriaSource* spellBook = new MateriaSource();
    std::cout << "Creating new Character :" << std::endl;
    ICharacter* Chara1 = new Character("Wan");
    std::cout << "Filling SpellBook :" << std::endl;
    spellBook->learnMateria(new Ice());
    spellBook->learnMateria(new Cure());
    AMateria* tmp;
    std::cout << "Creating a new Materia" << std::endl;
    tmp = spellBook->createMateria("ice");
    std::cout << "Learning an already known spell :" << std::endl;
    spellBook->learnMateria(new Cure());
    std::cout << "Equipping Player : " << std::endl;
    Chara1->equip(tmp);
	AMateria* tmp2;
    tmp2 = spellBook->createMateria("cure");
    
    std::cout << "Filling Inventory :" << std::endl;
    Chara1->equip(tmp2);
    Chara1->equip(tmp);
    Chara1->equip(tmp2);
    Chara1->equip(tmp);
    Chara1->equip(tmp2);
    std::cout << "\n---------------- ";
    std::cout << " NEW PLAYER ";
    std::cout << " ----------------\n" << std::endl;
    ICharacter* Chara2 = new Character("Grint");

    std::cout << "First Player uses ICE on Second Player" << std::endl;
    Chara1->use(0, *Chara2);
    std::cout << "First Player uses CURE on Second Player" << std::endl;
    Chara1->use(1, *Chara2);

    std::cout << "Unequipping then using slot nº0 of the inventory :" << std::endl;
    Chara1->unequip(0);
    Chara1->use(0, *Chara2);
    

    std::cout << "Equipping second player :" << std::endl;
    Chara2->equip(tmp2);
    Chara2->equip(tmp);
    std::cout << "Second Player uses ICE on First Player" << std::endl;
    Chara2->use(1, *Chara1);
    std::cout << "Trying slot nº8 of the inventory :" << std::endl;
    Chara2->use(8, *Chara1);
    Chara2->equip(tmp2);

    delete tmp;
    delete tmp2;
    delete Chara1;
    delete Chara2;
    delete spellBook;
    return 0;
}
