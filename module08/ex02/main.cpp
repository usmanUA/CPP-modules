/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:58:09 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/24 11:13:34 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main( void )
{
	MutantStack<int>	mstack;

	mstack.push(1);
	mstack.push(2);
	mstack.push(3);
	std::cout << mstack.top() << std::endl;

	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	mstack.push(7);
	mstack.push(8);
	mstack.push(9);
	mstack.push(10);
	mstack.push(11);
	mstack.push(12);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	};
	std::stack<int> s(mstack);
	std::cout << "\033[033mlast element of s (copy constructed from mstack):\033[0m"<< std::endl;
	std::cout << s.top() << std::endl;
	std::cout << "==1. Create MutantStack, push 5 and 7, shows the top==" << std::endl;
	MutantStack<int> astack;
	astack.push(5);
	astack.push(7);
	std::cout << astack.top() << std::endl;
	std::cout << "==2. Pop the top, show the size==" << std::endl;
	astack.pop();
	std::cout << astack.size() << std::endl;
	std::cout << "==2.1  push 3, 5, 737, 0==" << std::endl;
	astack.push(3);
	astack.push(5);
	astack.push(737);
	astack.push(0);
	MutantStack<int>::iterator iit = astack.begin();
	MutantStack<int>::iterator iite = astack.end();
	++iit;
	--iit;
	std::cout << "==3. Iterate through the stack and print the values==" << std::endl;
	while (iit != iite)
	{
		std::cout << *iit << std::endl;
		++iit;
	}
	std::cout << "==4. Create a list from the stack and print the values==" << std::endl;
	std::list<int> mylist(astack.begin(), astack.end());
	for (int i : mylist)
		std::cout << i << std::endl;
	
	return 0;
};
