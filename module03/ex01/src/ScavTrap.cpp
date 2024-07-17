/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 23:45:27 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/09 23:46:09 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " constructed!" << std::endl;

};

ScavTrap::ScavTrap(const std::string& Name) : ClapTrap(Name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " constructed!" << std::endl;

};

ScavTrap::ScavTrap(const ScavTrap& from): ClapTrap(from)
{
	std::cout << "ScavTrap " << this->Name << " copy constructed!" << std::endl;
};

ScavTrap&	ScavTrap::operator=(const ScavTrap& from)
{
	ClapTrap::operator=(from);
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->Name << " destructed!" << std::endl;
};

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->Name << " Can't hug " << target;
		std::cout << " as it is Dead" << std::endl;
		return;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->Name << " Can't hug " << target;
		std::cout << " as it has no energy points" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->Name;
	std::cout << " hugs " << target;
	std::cout << " causing " << this->attackDamage;
	std::cout << " points of good damage!" << std::endl;
	--this->energyPoints;
};

void	ScavTrap::guardGate(void)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->Name << " is dead!" << std::endl;
		return;
	}

	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode." << std::endl;
}
