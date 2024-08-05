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

#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "Test constructors:\n";
	DiamondTrap bob("Bob");
	DiamondTrap joe("Joe");
	DiamondTrap sue("Sue");

	std::cout << "\nTest member functions:\n";
	bob.takeDamage(2);
	bob.beRepaired(2);
	bob.attack("Jim");
	bob.highFivesGuys();
	bob.guardGate();
	bob.whoAmI();

	std::cout << "\nTest health functions:\n";
	joe.takeDamage(10);
	joe.takeDamage(89);
	joe.takeDamage(1);

	std::cout << "\nTest energy:\n";
	for (int i = 0; i < 60; i++)
	{
		sue.attack("x");
	}

	std::cout << "\nTest copy:\n";
	DiamondTrap a;
	a = bob;
	DiamondTrap b(joe);

	std::cout << "\nTest destructors:\n";
}
