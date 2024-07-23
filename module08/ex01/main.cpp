/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:47:08 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/21 19:00:44 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <iostream>
#include <vector>

void	checkInsertions( Span span )
{
	std::cout << "\033[32madNumber: \033[0m\n";
	for (int i = 0; i < 11; i++)
		span.addNumber(i);
	std::cout << "\033[32maddNumberRange: \033[0m\n";
	std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	span.addNumberRange(vec.begin(), vec.end());
	std::cout << "\033[034mShortest Span: \033[0m" << span.shortestSpan() << std::endl;
	std::cout << "\033[034mLongest Span: \033[0m" << span.longestSpan() << std::endl;
};

int	main( void )
{
	Span span = Span(9);

	checkInsertions(span);
	return 0;
}
