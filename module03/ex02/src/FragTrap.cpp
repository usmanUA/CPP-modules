/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:45:30 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/10 10:51:27 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	std::cout << "FragTrap " << this->Name << " constructed!" << std::endl;

};

FragTrap::FragTrap(const std::string& Name) : ClapTrap(Name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	std::cout << "FragTrap " << this->Name << " constructed!" << std::endl;

};

FragTrap::FragTrap(const FragTrap& from): ClapTrap(from)
{
	std::cout << "FragTrap " << this->Name << " copy constructed!" << std::endl;
};

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->Name << " destructed!" << std::endl;
};

FragTrap&	FragTrap::operator=(const FragTrap& from)
{
	ClapTrap::operator=(from);
	std::cout << "FragTrap " << this->Name << " copy assigned!" << std::endl;
	return *this;
};

void	FragTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << "FragTrap " << this->Name << " Can't touch " << target;
		std::cout << " as it is Dead" << std::endl;
		return;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "FragTrap " << this->Name << " Can't touch " << target;
		std::cout << " as it has no energy points" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->Name;
	std::cout << " touches " << target;
	std::cout << " causing " << this->attackDamage;
	std::cout << " points of lovely damage!" << std::endl;
	--this->energyPoints;
};

void	FragTrap::highFivesGuys(void)
{
	if (this->hitPoints == 0)
	{
		std::cout << "FragTrap " << this->Name << " is dead!" << std::endl;
		return;
	}

	std::cout << "FragTrap " << this->Name << " gives positive High Five" << std::endl;
}
