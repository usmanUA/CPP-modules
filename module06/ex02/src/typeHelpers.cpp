/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeHelpers.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:26:35 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 21:38:27 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

Base*	generate( void )
{
	switch (std::rand() % 3)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return nullptr;
};

void	identify( Base* p )
{
	int	abc = 0;
	Base* bPtrs[] = {dynamic_cast<A*>(p), dynamic_cast<B*>(p), dynamic_cast<C*>(p)};
	for (int i = 0; i < 3; i++)
	{
		if (bPtrs[i])
			abc = i;
	};
	switch (abc)
	{
		case 0:
			std::cout << "A" << std::endl;
			return;
		case 1:
			std::cout << "B" << std::endl;
			return;
		case 2:
			std::cout << "C" << std::endl;
			return;
	}
};

void	identify( Base& p )
{
	int	abc = 0;
	Base* bPtrs[] = {dynamic_cast<A*>(&p), dynamic_cast<B*>(&p), dynamic_cast<C*>(&p)};
	for (int i = 0; i < 3; i++)
	{
		if (bPtrs[i])
			abc = i;
	};
	switch (abc)
	{
		case 0:
			std::cout << "A" << std::endl;
			return;
		case 1:
			std::cout << "B" << std::endl;
			return;
		case 2:
			std::cout << "C" << std::endl;
			return;
	}
};
