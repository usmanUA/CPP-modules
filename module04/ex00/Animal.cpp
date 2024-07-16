/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:25:15 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/13 10:31:12 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "An animal";
	std::cout << "Animal constructed" << std::endl;
};


Animal::Animal(const Animal& from)
{
	this->type = from.type;
	std::cout << "Animal copy constructed" << std::endl;
};

Animal&	Animal::operator=(const Animal& from)
{
	this->type = from.type;
	std::cout << "Animal copy assigned" << std::endl;
	return *this;
};

Animal::~Animal(void)
{
	std::cout << "Animal destructed" << std::endl;
};

std::string	Animal::getType(void) const
{
	return this->type;
};

void	Animal::makeSound(void) const
{
	std::cout << "Default Animal sound" << std::endl;
};
