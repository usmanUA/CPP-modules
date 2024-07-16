/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:23:55 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/14 22:26:45 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"

AMateria::AMateria(void)
{
};

AMateria::AMateria(std::string const & type): type(type)
{
};

AMateria::AMateria(const AMateria& from): type(from.type)
{
};

AMateria::~AMateria(void)
{
};

AMateria&	AMateria::operator=(const AMateria&)
{
	return *this;
};

std::string const & AMateria::getType()	const
{
	return this->type;
};

void	AMateria::use(ICharacter&)
{
};
