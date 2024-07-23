/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 23:05:15 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/19 23:23:45 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm()
{
	this->target = "Default";
};

PresidentialPardonForm::~PresidentialPardonForm( void )
{

}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("Presidential Form", 25, 5)
{
	this->target = target;
};

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& from )
{
	this->target = from.target;
};

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& from )
{
	if (this != &from)
		this->target = from.target;
	return *this;
};

void	PresidentialPardonForm::executeFormAction( void )	const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

