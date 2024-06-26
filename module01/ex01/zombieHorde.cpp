/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 22:18:05 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/25 22:18:31 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie*	zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].give_name(name);
	return (zombies);
};
