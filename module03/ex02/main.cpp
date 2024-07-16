/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:22:23 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/11 21:22:52 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "Creating FragTraps:\n";
	FragTrap bob("Bob");
	FragTrap joe("Joe");
	FragTrap sue("Sue");
	FragTrap carl;

	std::cout << "\nEnergy test:\n";
	bob.attack("Joe");
	for (int i = 0; i < 100; i++)
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
	sue.beRepaired(1);

	std::cout << "\nCopy test:\n";
	FragTrap sal(carl);
	FragTrap greg;
	greg = carl;
	sal.takeDamage(100);
	greg.attack("nobody");
	greg.takeDamage(100);
	carl.attack("nobody");

	std::cout << "\nHigh five test:\n";
	bob.highFivesGuys();
	carl.highFivesGuys();
	
	std::cout << "\nDestroy ClapTraps:\n";
	return 0;
}
