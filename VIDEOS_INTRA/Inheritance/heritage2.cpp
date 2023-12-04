/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/04 16:30:50 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal {
	
	private:
		int		_numberofLegs;

	public:
		Animal(;
		Animal(Animal const &));
		Animal& operator=(Animal const &);
		~Animal();

		void	run(int distance);
		void	call();
		void	eat(std::string const & what);
		void	walk(int distance);
};

class Cat : public Animal { // signifie que cest une animal
	
	public:
		Cat(;
		Cat(Cat const &));
		Cat& operator=(Cat const &);
		~Cat();

		void	scornSomeone(std::string const & target);
}

class Pony : public Animal {
	
	public:
		Pony(;
		Pony(Pony const &));
		Pony& operator=(Pony const &);
		~Pony();

		void	doMagic(std::string const & target);
}
