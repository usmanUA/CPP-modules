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
	funcP	funcsP[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
			break;
	};
	if (i == 4)
		return;
	(this->*funcsP[i])();
};

void	Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
};

void	Harl::info(void)
{
	std::cout << INFO << std::endl;
};

void	Harl::warning(void)
{
	std::cout << WARNING << std::endl;
};

void	Harl::error(void)
{
	std::cout << ERROR << std::endl;
};
