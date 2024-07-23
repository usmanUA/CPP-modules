/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:49:08 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/18 15:58:44 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : Name("NoName"), gradeSign(150), gradeExec(150)
{
	this->isItSigned= false;
};

Form::~Form( void )
{
};

Form::Form(std::string Name, const int gS, const int gE) : Name(Name), gradeSign(gS), gradeExec(gE)
{
	this->isItSigned= false;
	if (gradeSign > 150 || gradeExec > 150)
		throw	Form::GradeTooLowException();
	else if (gradeSign < 1 || gradeExec < 1)
		throw	Form::GradeTooHighException();

};

Form::Form(const Form& from) : Form(from.Name, from.gradeSign, from.gradeExec)
{
};

Form&	Form::operator=(const Form& from)
{
	(void)from;
	return *this;
};

std::string	const Form::getName( void ) const
{
	return this->Name;
};

bool	Form::getisItSigned( void )
{
	return this->isItSigned;
};

int	Form::getGradeSign( void )	const
{
	return this->gradeSign;
};

int	Form::getGradeExec( void )	const
{
	return this->gradeExec;
};

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	int	bureasGrade = bureaucrat.getGrade();

	if (bureasGrade <= this->gradeSign)
		throw	Form::GradeTooLowException();	
	else
		this->isItSigned = true;
}

const	char*	Form::GradeTooLowException::what() const throw()
{
	return "\033[31m Grade Too Low\033[0m";
};

const	char*	Form::GradeTooHighException::what() const throw()
{
	return "\033[31m Grade Too High\033[0m";
};

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << " created with gradeSign " << form.getGradeSign();
	out << " and gradeExec " << form.getGradeExec();
	return out;
};
