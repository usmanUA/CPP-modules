/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:25:17 by uahmed            #+#    #+#             */
/*   Updated: 2024/08/03 12:26:50 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int argc, char *argv[] )
{
	if (argc < 2)
	{
		std::cout << USAGE;
		return 0;
	}
	PmergeMe::pMergeMe( argc, argv );
	return 0;
}
