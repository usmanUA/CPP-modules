/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 21:56:12 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/09 22:01:09 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "Creating ScavTraps:\n";
	ScavTrap bob("Bob");
	ScavTrap joe("Joe");
	ScavTrap sue("Sue");
	ScavTrap carl;

	std::cout << "\nCreating ClapTrap:\n";
	ClapTrap earl("Earl");
	earl.attack("nobody");

	std::cout << "\nEnergy test:\n";
	bob.attack("Joe");
	for (int i = 0; i < 50; i++)
		bob.attack("Joe");
	bob.takeDamage(100);
	bob.attack("Joe");
	
	std::cout << "\nDeath test:\n";
	joe.takeDamage(100);
	joe.attack("Bob");
	joe.beRepaired(10);

	std::cout << "\nRepair test:\n";
	sue.takeDamage(99);
	sue.beRepaired(5);
	sue.takeDamage(5);
	sue.takeDamage(1);

	std::cout << "\nCopy test:\n";
	ScavTrap sal(carl);
	ScavTrap greg;
	greg = carl;
	sal.takeDamage(100);
	greg.attack("nobody");
	greg.takeDamage(100);
	carl.attack("nobody");

	std::cout << "\nGate guard test:\n";
	bob.guardGate();
	carl.guardGate();
	
	std::cout << "\nDestroy ClapTraps:\n";
	return 0;
}
