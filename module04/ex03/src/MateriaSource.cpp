/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:11:37 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/17 09:20:42 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
};

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
};

MateriaSource::MateriaSource(const MateriaSource& from)
{
	for (int i = 0; i < 4; i++)
	{
		if (from.inventory[i] != NULL)
			this->inventory[i] = from.inventory[i]->clone();
	}
};

MateriaSource&	MateriaSource::operator=(const MateriaSource& from)
{
	if (this != &from)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (from.inventory[i] != NULL)
				this->inventory[i] = from.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return *this;
};

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m->clone();
			break;
		}
	}
};

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
			continue;
		if (this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
	}
	return NULL;
};
