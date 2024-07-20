/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 23:03:00 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/08 23:11:13 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->Name = "generic";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << this->Name << " constructed" << std::endl;
};


ClapTrap::ClapTrap(const std::string& Name)
{
	std::cout << "ClapTrap " << Name << " constructed" << std::endl;
	this->Name = Name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
};

ClapTrap::ClapTrap(const ClapTrap& from)
{
	if (this != &from)
	{
		this->Name = from.Name;
		this->hitPoints = from.hitPoints;
		this->energyPoints = from.energyPoints;
		this->attackDamage = from.attackDamage;
	}
	std::cout << "ClapTrap " << this->Name << " copy constructed!" << std::endl;
};

ClapTrap&	ClapTrap::operator=(const ClapTrap& from)
{
	if (this != &from)
	{
		this->Name = from.Name;
		this->hitPoints = from.hitPoints;
		this->energyPoints = from.energyPoints;
		this->attackDamage = from.attackDamage;
	}
	std::cout << "ClapTrap " << this->Name << " copy assigned!" << std::endl;
	return *this;
};

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->Name << " destructed" << std::endl;
};

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->Name << " Can't attack " << target;
		std::cout << " as it is Dead" << std::endl;
		return;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->Name << " Can't attack " << target;
		std::cout << " as it has no energy points" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->Name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->attackDamage;
	std::cout << " points of damage!" << std::endl;
	--this->energyPoints;
};

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->Name;
		std::cout << " is already Dead" << std::endl;
		return;
	}
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->Name << " took " << amount << " damage!\n";
	if (this->hitPoints <= 0)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->Name << " got killed" << std::endl;
	}
};

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->Name;
		std::cout << " repairs itself";
		std::cout << " taking " << amount;
		std::cout << " hit points back!" << std::endl;
		this->hitPoints += amount;
		--this->energyPoints;
		return;
	}
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->Name << " is Dead!" << std::endl;;
	}
	else if (this->energyPoints == 0)
		std::cout << "ClapTrap " << this->Name << " has no energy points!" << std::endl;;
};
