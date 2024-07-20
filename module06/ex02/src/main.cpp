/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:19:51 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 21:19:53 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "../include/Base.hpp"

Base*	generate( void );
void	identify( Base* p );
void	identify( Base& p );

int	main( void )
{
	std::srand(std::time(NULL));
	for (int i = 0; i < 6; i++)
	{
		Base* base = generate();
		identify( base );
		identify( *base );
		delete base;
	}
};
