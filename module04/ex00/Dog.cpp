/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:29:24 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/13 10:33:05 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog(void): Animal()
{
	this->type = "Dog";
	std::cout << "Dog constructed" << std::endl;
};

Dog::Dog(const Dog& from): Animal(from)
{
	std::cout << "Dog copy constructed" << std::endl;
};

Dog&	Dog::operator=(const Dog& from)
{
	Animal::operator=(from);
	std::cout << "Dog copy assigned" << std::endl;
	return *this;
};

Dog::~Dog(void)
{
	std::cout << "Dog destructed" << std::endl;
};

void	Dog::makeSound(void) const
{
	std::cout << "Vau Vau Vau ..." << std::endl;
};
