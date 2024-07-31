/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:24:07 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/21 12:38:04 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class	Span
{
	public:
		Span( void );
		~Span( void );
		Span( unsigned int );
		Span( const Span& );
		Span	operator=( const Span& );

		void	addNumber( int );
		void	addNumberRange( std::vector<int>::iterator ,  std::vector<int>::iterator );
		unsigned	int	shortestSpan( void );
		unsigned	int	longestSpan( void );
	private:
		unsigned	int	N;
		std::vector<int>	arr;
};

#endif
