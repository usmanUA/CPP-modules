/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 22:43:16 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/19 23:03:19 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm()
{
	this->target = "Default";
};

RobotomyRequestForm::~RobotomyRequestForm( void )
{
};

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("Robotomy Request Form", 72, 45)
{
	this->target = target;
};

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& from)
{
	this->target = from.target;
};

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& from)
{
	if (this != &from)
		this->target = from.target;
	return *this;
};

void	RobotomyRequestForm::executeFormAction( void )	const
{
	std::cout << "Bzzzzzzzzzzzzzzz" << std::endl;
	int	randomRobot = rand() % 100;
	if (randomRobot < 50)
		std::cout << this->target << " Robotomy faild" << std::endl;
	else
		std::cout << this->target << " has been successfuly Robotomized" << std::endl;
}

