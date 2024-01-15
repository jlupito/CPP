/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarthaud <jarthaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:15:27 by jarthaud          #+#    #+#             */
/*   Updated: 2024/01/15 11:30:36 by jarthaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void) {
    
	std::cout << "-----test mutantstack------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5); // insert at the top/last position
	mstack.push(17);
	std::cout << mstack.top() << std::endl; // returns a reference to the top element
	mstack.pop(); // removes top element and reduces size by 1
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.itBegin();
	MutantStack<int>::iterator ite = mstack.itEnd();
	++it;
	--it;
	while (it != ite) {
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-----test list------" << std::endl;
	std::list<int> mlist;
	mlist.push_back(5); // insert at the top/last position
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl; // front is first, back is last
	mlist.pop_back(); // pop_front removes first, pop_back removes last
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	//[...]
	mlist.push_back(0);
	std::list<int>::iterator it2 = mlist.begin();
	std::list<int>::iterator ite2 = mlist.end();
	++it2;
	--it2;
	while (it2 != ite2) {
	std::cout << *it2 << std::endl;
	++it2;
	}
	std::list<int> s2(mlist);
	return 0;
	
}
