/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:16:22 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 09:26:34 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern( void )
{}

Intern::~Intern( void )
{}

Intern::Intern( const Intern& from )
{
	(void)from;
};

Intern&	Intern::operator=( const Intern& from )
{
	(void)from;
	return *this;
};

AForm*	Intern::makeForm( std::string Name, std::string target )
{
	AForm*	createdForm;

	std::string	Forms[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	int	ind = 0;
	for (std::string name : Forms)
	{
		if (Name == name)
			break;
		ind++;
	};
	switch (ind)
	{
		case 0:
			createdForm = new ShrubberyCreationForm( target );
			break;
		case 1:
			createdForm = new RobotomyRequestForm( target );
			break;
		case 2:
			createdForm = new PresidentialPardonForm( target );
			break;
		default:
			std::cout << Colors::RED << Name << " does not exist" << Colors::RESET << std::endl;
			createdForm = nullptr;
			return createdForm;
	};
	std::cout << Colors::GREEN << "Intern creates " << createdForm->getName() << " form" << Colors::RESET << std::endl;
	return createdForm;
};
