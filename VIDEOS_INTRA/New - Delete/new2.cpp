/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:20:42 by jarthaud          #+#    #+#             */
/*   Updated: 2023/11/16 15:50:26 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {
	
	private:
		std::string _login;
	
	public:
		Student() : _login("ldefault") {
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~Student() {
			std::cout << "Student " << this->_login << " died" << std::endl;
		}

};

int main() {
	Student*	students = new Student[42]; // attention operateur new [] ne prend pas de parametres

	delete [] students; 

	return 0;
}
