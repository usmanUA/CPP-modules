/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 00:01:56 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/13 00:09:41 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	this->Name = "generic";
	ClapTrap::Name = "generic_name";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "DiamondTrap generic constructed!" << std::endl;
};

DiamondTrap::DiamondTrap(const std::string& Name): ClapTrap(Name), ScavTrap(Name), FragTrap(Name)
{
	this->Name = Name;
	ClapTrap::Name = Name + "_clap_name";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "DiamondTrap " << ClapTrap::Name << " constructed!" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& from): ScavTrap(from), FragTrap(from)
{
	this->ClapTrap::Name = from.ClapTrap::Name;
	std::cout << "DiamondTrap " << ClapTrap::Name << " copy constructed!" << std::endl;
};

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << ClapTrap::Name << " destroyed!" << std::endl;
};

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& from)
{
	ClapTrap::operator=(from);
	this->ClapTrap::Name = from.ClapTrap::Name;
	std::cout << "DiamondTrap " << ClapTrap::Name << " copy assigned!" << std::endl;
	return *this;
};

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I " << this->Name << " am " << ClapTrap::Name << std::endl;
};
