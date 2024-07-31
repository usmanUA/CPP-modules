/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:43:31 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/24 11:11:54 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "stack"
#include <deque>

template <typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack( void ) {};
		~MutantStack() {};
		MutantStack(const MutantStack& from)
		{
			*this = from;
		};
		MutantStack&	operator=(const MutantStack& from)
		{
			std::stack<T, Container>::operator=(from);
			return *this;
		};

		typedef	typename Container::iterator	iterator;
		typedef	typename Container::const_iterator	const_iterator;

		iterator	begin( void )
		{
			return this->c.begin();
		};
		const_iterator	begin( void ) const
		{
			return this->c.begin();
		};
		iterator	end( void )
		{
			return this->c.end();
		};
		const_iterator	end( void ) const
		{
			return this->c.end();
		};

};

#endif
