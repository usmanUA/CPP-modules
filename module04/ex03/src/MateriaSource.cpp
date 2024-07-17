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

MateriaSource::MateriaSource(void): IMateriaSource()
{
};

MateriaSource::~MateriaSource(void)
{
};

MateriaSource::MateriaSource(const MateriaSource& from): IMateriaSource(from)
{
};

MateriaSource&	MateriaSource::operator=(const MateriaSource& from)
{
	IMateriaSource::operator=(from);
	return *this;
};

void	MateriaSource::learnMateria(AMateria* amateria)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = amateria;
			break;
		}
	}
};
