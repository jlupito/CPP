/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:38 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/11 16:39:30 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* c(j);
	const WrongAnimal* z = new WrongCat();

	std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	std::cout << "Test 1 : check the types of animals, and make sound post standard constructors" << std::endl;
	std::cout << "Sound of i, a Cat : " << std::endl;
	i->makeSound();
	std::cout << "Sound of j, a Dog : " << std::endl;
	j->makeSound();
	std::cout << "Sound of Z, a WrongCat : " << std::endl;
	z->makeSound();
	std::cout << "Sound of meta, an Animal : " << std::endl;
	meta->makeSound();

	std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	std::cout << "Test 2 : check the types of animals, and make sound post copy constructors" << std::endl;
	std::cout << "j = " << j->getType() << std::endl;
	std::cout << "c = " << c->getType() << std::endl;
	j->makeSound();
	c->makeSound();
	std::cout << "we perform j = i, i being a Cat" << std::endl;
	j = i;
	std::cout << "i adress " << &i << std::endl;
	std::cout << "j adress " << &j << std::endl;
	std::cout << "j = " << j->getType() << std::endl;

	std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	std::cout << "Test 3 : turning a Cat into a Dog via the = operator" << std::endl;
	delete i;
	const Animal* k = new Dog();
	i = k;
	std::cout << "i adress " << &i << std::endl;
	std::cout << "k adress " << &k << std::endl;
	std::cout << "i->type = " << i->getType() << std::endl;
	if (&k != &i && i->getType() == k->getType())
		std::cout << "SUCCESS : same value but not the same addresses" << std::endl;
	
	std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	std::cout << "Test 4 : leak check post copy constructor" << std::endl;
	Animal p(*i);
	std::cout << "p->type = " << p.getType() << std::endl;
	std::cout << "i->type = " << i->getType() << std::endl;
	std::cout << "i adress = " << i << std::endl;
	std::cout << "p adress = " << &p << std::endl;
	if (&p != i && i->getType() == p.getType())
		std::cout << "SUCCESS : same value but not the same addresses" << std::endl;
	delete i;
	std::cout << "after I deleted i, p = " << p.getType() << std::endl;
	delete meta;
	delete z;
	delete c;

	std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	std::cout << "Test 5 : leak check for an array of cats and dogs stored in a Animal tab" << std::endl;
	const Animal* tab[4] = {new Cat(), new Dog(), new Cat(), new Dog()};
	int iterator = 0;
	while (iterator < 4)
	{
		delete tab[iterator];
		iterator++;
	}

	std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	std::cout << "Test 6 : Cloning dogs, the dream, check that the former badDoggy now wants to lick ur face" << std::endl;
	Dog goodDoggy;
	Dog badDoggy;
	goodDoggy.getBrain()->ideas[0] = "I WANT TO LICK YOUR FACE";
	badDoggy.getBrain()->ideas[0] = "I WANT TO BITE YOUR FACEE";
	std::cout << "Address of badDoggy = " << &badDoggy << std::endl;
	std::cout << "Address of goodDoggy = " << &goodDoggy << std::endl;
	std::cout << "Address of badDoggy brain = " << badDoggy.getBrain() << std::endl;
	std::cout << "Address of goodDoggy brain = " << goodDoggy.getBrain() << std::endl;
	std::cout << "BEFORE COPY" << std::endl;
	std::cout << "badDoggy first idea = " << badDoggy.getBrain()->ideas[0] << std::endl;
	std::cout << "goodDoggy first idea = " <<  goodDoggy.getBrain()->ideas[0] << std::endl;
	std::cout << "AFTER COPY" << std::endl;
	goodDoggy = badDoggy;
	std::cout << "Address of badDoggy = " << &badDoggy << std::endl;
	std::cout << "Address of goodDoggy = " << &goodDoggy << std::endl;
	std::cout << "Address of badDoggy brain = " << badDoggy.getBrain() << std::endl;
	std::cout << "Address of goodDoggy brain = " << goodDoggy.getBrain() << std::endl;
	std::cout << "goodDoggy first idea = " <<  goodDoggy.getBrain()->ideas[0] << std::endl;
	std::cout << "badDoggy first idea = " <<  badDoggy.getBrain()->ideas[0] << std::endl;
	if (goodDoggy.getBrain()->ideas[0] == badDoggy.getBrain()->ideas[0] && badDoggy.getBrain() != goodDoggy.getBrain())
		std::cout << "SUCCESS BOTH HAVE THE SAME IDEA BUT NOT THE SAME ADDRESS GOOD JOB" << std::endl;
	if (goodDoggy.getBrain()->ideas[0] == badDoggy.getBrain()->ideas[0] && badDoggy.getBrain() == goodDoggy.getBrain())
		std::cout << "FAILURE, BOTH SHARE THE SAME ADRESS, A DEEP COPY IS A C OPY OF THE CONTENT OF AN OBJECT\nNOT OF THE ADDRESS" << std::endl;
	if (goodDoggy.getBrain()->ideas[0] != badDoggy.getBrain()->ideas[0])
		std::cout << "FAILURE, THE CONTENT ISNT COPIED" << std::endl;
	


	return 0;
}