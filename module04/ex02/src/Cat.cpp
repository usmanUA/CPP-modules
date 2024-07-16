/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:34:06 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/14 09:52:30 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void): Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructed" << std::endl;
};

Cat::Cat(const Cat& from): Animal(from)
{
	this->brain = new Brain(*from.brain);
	std::cout << "Cat copy constructed" << std::endl;
};

Cat&	Cat::operator=(const Cat& from)
{
	Animal::operator=(from);
	if (this != &from)
		*this->brain = *from.brain;
	std::cout << "Cat copy assigned" << std::endl;
	return *this;
};

Cat::~Cat(void)
{
	delete(this->brain);
	std::cout << "Cat destructed" << std::endl;
};

void	Cat::makeSound(void) const
{
	std::cout << "Meeeeoooooowwww ..." << std::endl;
};

Brain*	Cat::getBrain(void)
{
	this->brain = new Brain();
	return this->brain;
};
