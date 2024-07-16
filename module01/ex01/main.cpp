/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 21:56:48 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/25 22:02:31 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name);

int	main()
{
	Zombie	*zombie;

	zombie = zombieHorde(4, "cpp01");
	for (int i = 0; i < 4; i++)
		(zombie + i)->announce();
	delete[] zombie;
};
