/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 21:27:03 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/11 15:31:37 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	Zombie::give_name(std::string name)
{
	this->name = name;
};

Zombie::Zombie(void)
{
	std::cout << "Unknown zombie getting created" << std::endl;
};

Zombie::~Zombie(void)
{
	std::cout << this->name << " getting destoyed\n";
};

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
};
