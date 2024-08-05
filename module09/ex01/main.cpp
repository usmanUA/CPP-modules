/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:04:23 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/29 19:04:53 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <string>

bool	notDigit( std::string& ops, char c )
{
	if (!std::isspace(c) && ops.find(c) == std::string::npos && !std::isdigit(c))
		return true;
	return false;
}

bool	validateRPN( const std::string& rpn )
{
	std::string ops = "+-*/";
	int	i = 0;
	for (auto c : rpn)
	{
		if (notDigit(ops, c) || ((i == 0 || i == 3) && ops.find(c) != std::string::npos))
		{
			std::cout << "\033[031mError\033[0m\n";
			return false;
		}
		if (!std::isspace(c))
			i++;
	};
	return true;
};

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (validateRPN( argv[1] ) == false)
			return 0;
		RPN::performCalcs( argv[1] );
		return 0;
	}
	std::cout << "\033[31mUSAGE:\n\t./rpn <reverse_polish_notation_string\033[0m\n";
	return 0;
};
