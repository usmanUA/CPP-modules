/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:30:40 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/06 23:31:20 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include "Fixed.hpp"

int main( void )
{
	Fixed a(10.5f);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << Fixed(1.1f) << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
