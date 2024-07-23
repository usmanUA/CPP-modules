/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:38:00 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/21 12:47:54 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iostream>

Span::Span( void )
{};

Span::~Span( void )
{};

Span::Span( unsigned int N )
{
	this->N = N;
};

Span::Span( const Span& from )
{
	this->N = from.N;
	this->arr = from.arr;
};

Span	Span::operator=( const Span& from )
{
	if (this != &from)
	{
		this->N = from.N;
		this->arr = from.arr;
	}
	return *this;
}

void	Span::addNumber( int num )
{
	if (this->arr.size() == this->N)
	{
		std::cerr << "\033[31mArray is full\033[0m\n";
		return;
	}
	this->arr.push_back(num);
}

void	Span::addNumberRange(std::vector<int>::iterator begin,  std::vector<int>::iterator end)
{
	unsigned int projTot = this->arr.size() + std::distance(begin, end);
	if (projTot >= this->N)
	{
		std::cerr << "\033[31mNo more space left in the array\033[0m\n";
		return;
	}
	while (begin != end)
	{
		this->arr.push_back(*begin);
		begin++;
	}
}

unsigned	int	Span::shortestSpan( void )
{
	if (this->arr.size() < 2)
		return 0;
	unsigned int span;
	std::vector<int> sortIt = this->arr;
	std::sort(sortIt.begin(), sortIt.end());
	std::vector<int>::iterator begin = sortIt.begin();
	std::vector<int>::iterator end = sortIt.end();
	unsigned int shortest = std::abs(sortIt[0] - sortIt[1]);
	for (std::vector<int>::iterator i = begin + 1; i < end; i++)
	{
		span = std::abs(*i - *(i - 1));
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

unsigned	int	Span::longestSpan( void )
{
	if (this->arr.size() < 2)
		return 0;
	auto min = std::min_element(this->arr.begin(), this->arr.end());
	auto max = std::max_element(this->arr.begin(), this->arr.end());
	return *max - *min;
}

