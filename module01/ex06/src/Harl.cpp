/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:28:53 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/29 19:35:14 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Harl.hpp"

void	Harl::complain(std::string level)
{
	int	i;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
			break;
	};
	switch (i)
	{
		case 0:
			debug();
			info();
			warning();
			error();
			break;
		case 1:
			info();
			warning();
			error();
			break;
		case 2:
			warning();
			error();
			break;
		case 3:
			error();
			break;
		default:
			std::cout << DEFAULT;
			return;
	
	};
};

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << DEBUG << std::endl;
};

void	Harl::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << INFO << std::endl;
};

void	Harl::warning(void)
{
	std::cout << "[WARNING]\n";
	std::cout << WARNING << std::endl;
};

void	Harl::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << ERROR << std::endl;
};
