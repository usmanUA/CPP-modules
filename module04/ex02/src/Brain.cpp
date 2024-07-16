/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:32:25 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/14 10:51:42 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

# include "iostream"

Brain::Brain(void)
{
	std::cout << "Brain constructed" << std::endl;
};

Brain::Brain(const Brain& from)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = from.ideas[i];
	std::cout << "Brain copy constructed" << std::endl;
}

Brain&	Brain::operator=(const Brain& from)
{
	if (this!= &from)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = from.ideas[i];
	}
	std::cout << "Brain copy assigned" << std::endl;
	return *this;
};

Brain::~Brain()
{
	std::cout << "Brain destructed" << std::endl;
};

void	Brain::addIdea(const std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i].empty())
		{
			this->ideas[i] = idea;
			break;
		}
	}
};

void	Brain::printIdeas(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (!this->ideas[i].empty())
			std::cout << this->ideas[i] << std::endl;
	}
};
