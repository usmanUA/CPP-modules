/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:10:56 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/18 10:36:35 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : Name(""), Grade(150)
{};

Bureaucrat::~Bureaucrat(void)
{};

Bureaucrat::Bureaucrat(std::string Name, int Grade) : Name(Name)
{
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->Grade = Grade;
};

Bureaucrat::Bureaucrat(const Bureaucrat& from) : Bureaucrat(from.Name, from.Grade)
{
};

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& from)
{
	this->Grade = from.Grade;
	return *this;
};

std::string	const Bureaucrat::getName( void ) const
{
	return this->Name;
};

int	Bureaucrat::getGrade( void ) const
{
	return this->Grade;
};

void	Bureaucrat::incrementGrade( void )
{
	if (this->Grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		--this->Grade;
};

void	Bureaucrat::decrementGrade( void )
{
	if (this->Grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		++this->Grade;

};

const	char*	Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return "\033[31mValueError: Grade Too High\nThe maximum Grade is 1\033[0m";
};

const	char*	Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return "\033[31mValueError: Grade Too Low\nThe minimum Grade is 150\033[0m";
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& burea)
{
	out << Colors::GREEN << burea.getName() << ", bureaucrat grade " << burea.getGrade() << "." << Colors::GREEN;
	return out;
};
