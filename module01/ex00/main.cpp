/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 21:56:48 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/11 15:20:32 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void randomChump(std::string name);

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
};

void randomChump(std::string name)
{
	Zombie(name).announce();
};

int	main()
{
	Zombie	*zombie;

	zombie = newZombie("Joe");
	zombie->announce();
	delete zombie;
	randomChump("Mark");
};
