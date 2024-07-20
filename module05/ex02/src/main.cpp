/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:49:10 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 09:49:12 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void executeForms(Bureaucrat b)
{
	ShrubberyCreationForm scf = ShrubberyCreationForm("shrubtarget");
	RobotomyRequestForm rrf = RobotomyRequestForm("robottarget");
	PresidentialPardonForm ppf = PresidentialPardonForm("preztarget");

	b.signForm(scf);
	b.signForm(rrf);
	b.signForm(ppf);

	b.executeForm(scf);
	b.executeForm(rrf);
	b.executeForm(ppf);

	std::cout << "\n";
}

int main()
{
	std::srand(time(NULL));

	executeForms(Bureaucrat("150", 150));

	executeForms(Bureaucrat("140", 140));
	executeForms(Bureaucrat("130", 130));

	executeForms(Bureaucrat("70", 70));
	executeForms(Bureaucrat("40", 40));

	executeForms(Bureaucrat("20", 20));
	executeForms(Bureaucrat("1", 1));
}
