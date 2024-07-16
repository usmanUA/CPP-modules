/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:34:06 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/13 10:34:27 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
};

WrongCat::WrongCat(const WrongCat& from): WrongAnimal(from)
{
	std::cout << "WrongCat copy constructed" << std::endl;
};

WrongCat&	WrongCat::operator=(const WrongCat& from)
{
	WrongAnimal::operator=(from);
	std::cout << "WrongCat copy assigned" << std::endl;
	return *this;
};


WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructed" << std::endl;
};

void	WrongCat::makeSound(void) const
{
	std::cout << "Moooooooooooooo ..." << std::endl;
};
