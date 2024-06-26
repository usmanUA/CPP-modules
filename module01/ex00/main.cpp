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

Zombie	*newZombie(std::string name);
void randomChump(std::string name);

int	main()
{
	Zombie	*zombie;

	zombie = newZombie("chacha");
	zombie->announce();
	delete zombie;
	randomChump("chachu");
};
