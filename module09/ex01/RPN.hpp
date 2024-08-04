/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 08:41:18 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/29 16:59:59 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RPN_HPP
#define RPN_HPP

#include "string"
#include "iostream"
#include <stack>
#include <functional>
#include <map>

class	RPN
{
	private:
		RPN( void );
		~RPN( void );
		RPN( const RPN& );
		RPN&	operator=( const RPN& );
	public:
		static	void	performCalcs( const std::string& rpn );
};

enum	e_ops
{
	PLUS,
	MINUS,
	MULTIPLY,
	DIVIDE,
};

#endif
