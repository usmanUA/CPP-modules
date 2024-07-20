/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 23:24:26 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/19 23:33:58 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm()
{
	this->target = "Default";
};

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
};

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("Shrubbery Form", 145, 137)
{
	this->target = target;
};

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& from )
{
	this->target = from.target;
};

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& from )
{
	if (this != &from)
		this->target = from.target;
	return *this;
};
void	ShrubberyCreationForm::executeFormAction( void )	const
{
	std::ofstream	outfile;

	outfile.open(this->target + "_shrubbery");
	if (!outfile.is_open())
	{
		std::cout << "Error opening " << this->target << "_shrubbery" << std::endl;
		return;
	}	
	outfile << "   *      *\n";
	outfile << "  ***    ***\n";
	outfile << " *****  *****\n";
	outfile << "   |      |\n";
};

