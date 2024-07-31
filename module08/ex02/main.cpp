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
	return 0;
};
