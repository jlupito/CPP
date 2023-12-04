/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heritage1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:32 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/04 16:24:53 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Cat {
	
	private:
		int		_numberofLegs;

	public:
		Cat(;
		Cat(Cat const &));
		Cat& operator=(Cat const &);
		~Cat();

		void	run(int distance);
		void	scornSomeone(std::string const & target);
};

class Pony {
	
	private:
		int		_numberofLegs;

	public:
		Pony(;
		Pony(Pony const &));
		Pony& operator=(Pony const &);
		~Pony();

		void	run(int distance);
		void	doMagic(std::string const & target);
}
