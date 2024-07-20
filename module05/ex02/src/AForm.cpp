/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:49:08 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/18 15:58:44 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm( void ) : Name("NoName"), gradeSign(150), gradeExec(150)
{
	this->isItSigned= false;
};

AForm::~AForm( void )
{
};

AForm::AForm(std::string Name, const int gS, const int gE) : Name(Name), gradeSign(gS), gradeExec(gE)
{
	this->isItSigned= false;
	if (gradeSign > 150 || gradeExec > 150)
		throw	AForm::GradeTooLowException();
	else if (gradeSign < 1 || gradeExec < 1)
		throw	AForm::GradeTooHighException();

};

AForm::AForm(const AForm& from) : AForm(from.Name, from.gradeSign, from.gradeExec)
{
};

AForm&	AForm::operator=(const AForm& from)
{
	(void)from;
	return *this;
};

std::string	const AForm::getName( void ) const
{
	return this->Name;
};

bool	AForm::getisItSigned( void )
{
	return this->isItSigned;
};

int	AForm::getGradeSign( void )	const
{
	return this->gradeSign;
};

int	AForm::getGradeExec( void )	const
{
	return this->gradeExec;
};

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	int	bureasGrade = bureaucrat.getGrade();

	if (bureasGrade <= this->gradeSign)
		throw	AForm::GradeTooLowException();	
	else
		this->isItSigned = true;
}

void	AForm::execute( Bureaucrat const & executor ) const
{
	if (this->isItSigned == false)
		throw	AForm::FormNotSignedException();
	else if (executor.getGrade() > this->gradeExec)
		throw	AForm::GradeTooLowException();
	else
		this->executeFormAction();
};

const	char*	AForm::GradeTooLowException::what() const throw()
{
	return "\033[31m Grade Too Low\033[0m";
};

const	char*	AForm::GradeTooHighException::what() const throw()
{
	return "\033[31m Grade Too High\033[0m";
};

const	char*	AForm::FormNotSignedException::what() const throw()
{
	return "\033[31m Form Not Signed \033[0m";
};

std::ostream&	operator<<(std::ostream& out, const AForm& form)
{
	out << form.getName() << " created with gradeSign " << form.getGradeSign();
	out << " and gradeExec " << form.getGradeExec();
	return out;
};
