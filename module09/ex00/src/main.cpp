/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:54:24 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/26 22:30:27 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "BitcoinExchange.hpp"

int	main( int argc, char *argv[] )
{
	BitcoinExchange	BTE;
	(void)argc;
	if (BTE.getStatus() == false)
	{
		std::cout << "Error opening file\n";
		return 1;
	}
	BTE.exchangeBTC(argv[1]);
	return 0;
};
