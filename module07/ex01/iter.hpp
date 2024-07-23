/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:58:31 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 23:16:44 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template < typename T >
void	printParameter(T& arg)
{
	std::cout << arg << std::endl;
};

template < typename T >
void incrementParameter(T& arg)
{
	arg++;
}

template < typename T >
void	iter( T* arr, int len, void (*f)(T&))
{
	for (int i = 0; i < len; i++)
		(*f)(arr[i]);
};
#endif
