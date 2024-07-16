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
	this->brain = new Brain();
	std::cout << "Dog constructed" << std::endl;
};

Dog::Dog(const Dog& from): Animal(from)
{
	this->brain = new Brain(*from.brain);
	std::cout << "Dog copy constructed" << std::endl;
};

Dog&	Dog::operator=(const Dog& from)
{
	Animal::operator=(from);
	if (this != &from)
		*this->brain = *from.brain;
	std::cout << "Dog copy assigned" << std::endl;
	return *this;
};

Dog::~Dog(void)
{
	delete(this->brain);
	std::cout << "Dog destructed" << std::endl;
};

void	Dog::makeSound(void) const
{
	std::cout << "Vau Vau Vau ..." << std::endl;
};

Brain*	Dog::getBrain(void)
{
	return this->brain;
};
