/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 21:56:48 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/11 15:24:54 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
	Zombie*	zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].give_name(name);
	return (zombies);
};

int	main()
{
	Zombie	*zombies;

	zombies = zombieHorde(4, "cpp01");
	for (int i = 0; i < 4; i++)
		(zombies + i)->announce();
	delete[] zombies;
};
