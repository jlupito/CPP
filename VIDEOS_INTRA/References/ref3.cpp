/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/16 16:59:35 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {
	
	private:
		std::string _login;
		
	public: 
		Student(std::string const & login): _login(login) {
		} // inititialise dans le constructeur

		std::string&	getLoginRef() { // renvoie une ref sur login
			return	this->_login;
		}
		
		std::string const &	getLoginRefConst() const {  // renvoie une ref const sur login
			return	this->_login;
		}

		std::string*	getLoginPtr() { // un ptr sur login
			return	&(this->_login);
		}

		std::string const *	getLoginPtrConst() const { // un ptr const sur le login
			return	&(this->_login);
		}
};

int main() {
	
	Student			bob = Student("barthaud"); 
	Student const	jim = Student("jarthaud");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst() )<< std::endl;

	bob.getLoginRef() = "bobarthaud";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyarthaud";
	std::cout << bob.getLoginRefConst() << std::endl;

	return 0;

}
