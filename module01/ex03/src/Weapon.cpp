/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 23:17:43 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/25 23:21:08 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
};

const	std::string&	Weapon::getType()
{
	return (this->type);
};

void	Weapon::setType(std::string type)
{
	this->type = type;
};
