/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:25:15 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/14 09:50:09 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "An animal";
	std::cout << "WrongAnimal constructed" << std::endl;
};


WrongAnimal::WrongAnimal(const WrongAnimal& from)
{
	this->type = from.type;
	std::cout << "WrongAnimal copy constructed" << std::endl;
};

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& from)
{
	this->type = from.type;
	std::cout << "WrongAnimal copy assigned" << std::endl;
	return *this;
};

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructed" << std::endl;
};

std::string	WrongAnimal::getType(void) const
{
	return this->type;
};

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Default WrongAnimal sound" << std::endl;
};
