/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/16 15:42:10 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {
	
	private:
		std::string _login;
	
	public:
		Student(std::string login) : _login(login) {
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~Student() {
			std::cout << "Student " << this->_login << " died" << std::endl;
		}

};

int main() {
	Student		john = Student("jarthaud"); // alloue statiquement sur la pile
	Student*	bob = new Student("barthaud");

	delete bob; // bob is destroyed

	return 0; // john is destroyed
}
