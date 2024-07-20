/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:00:30 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 17:04:44 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
		return 0;
	}
	std::cout << "Usage:\n./scalarconverter <value>" << std::endl;
};
