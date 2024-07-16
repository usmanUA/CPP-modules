/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:55:17 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/26 20:57:40 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fstream"
# include "iostream"
#include <cstddef>
#include <fstream>
#include <string>

# define USAGE "\033[31mmysed:\033[0m\n\t\033[36m./mysed <filename> <s1> <s2>\033[0m\n"

int	openError(std::string filename)
{
	std::cout << "Error opening " << filename  << std::endl;
	return (1);
};

std::string	replaceStr(std::string line, std::string replaceMe, std::string replaceWith)
{
	std::string	result;
	size_t		pos;
	size_t		rM;
	size_t		found;

	pos = 0;
	rM = replaceMe.length();
	while (true)
	{
		found = line.find(replaceMe, pos);
		if (found != std::string::npos)
		{
			result.append(line, pos, found - pos);
			result.append(replaceWith);
			pos = found + rM;
		}
		else
		{
			result.append(line, pos);
			break;
		};
	};
	return (result);
};

int	main(int argc, char **argv)
{

	if (argc == 4)
	{
		std::string	line;
		std::string	input = argv[1];
		std::string	replaceMe = argv[2];
		std::string	replaceWith = argv[3];
		std::ifstream	inputFile(input);

		if (!inputFile.is_open())
			return (openError(input));
		std::ofstream	outputFile(input + ".replace");
		if (!outputFile.is_open())
			return (openError(input + ".replace"));
		while (std::getline(inputFile, line))
			outputFile << replaceStr(line, replaceMe, replaceWith) << std::endl;
		inputFile.close();
		outputFile.close();
		return 0;
	};
	std::cout << USAGE;
	return 0;
};
