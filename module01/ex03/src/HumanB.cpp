/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 23:15:35 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/26 08:27:08 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/HumanB.hpp"
# include "iostream"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
};

void	HumanB::attack()
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " can not attack as they do not have a weapon" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
};

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
};
