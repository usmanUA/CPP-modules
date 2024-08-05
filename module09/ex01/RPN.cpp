/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:49:17 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/29 17:00:45 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void )
{};

RPN::~RPN( void )
{};

RPN::RPN( const RPN& from )
{
	(void)from;
};

RPN&	RPN::operator=( const RPN& from )
{
	(void)from;
	return *this;
};

void	RPN::performCalcs( const std::string& rpn )
{
	std::stack<int>	container;
	std::string	ops = "+-*/";
	size_t	pos;

	for (auto c : rpn)
	{
		if (std::isspace(c))
			continue;
		pos = ops.find(c);
		if (pos != std::string::npos)
		{
			int	last = container.top();
			container.pop();
			int	slast = container.top();
			container.pop();
			switch (pos)
			{
				case PLUS:
					container.push(slast + last);
					break;
				case MINUS:
					container.push(slast - last);
					break;
				case MULTIPLY:
					container.push(slast * last);
					break;
				case DIVIDE:
					container.push(slast / last);
					break;
			}
			continue;
		}
		container.push(c - '0');
	};
	std::cout << container.top() << std::endl;
	container.pop();
};
