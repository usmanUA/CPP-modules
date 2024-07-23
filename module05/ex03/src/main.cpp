/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:48:43 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 09:48:45 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Intern someRandomIntern;
	AForm* scf;
	AForm* rrf;
	AForm* ppf;
	AForm* noform;

	scf = someRandomIntern.makeForm("Shrubbery Creation", "Carl");
	std::cout << *scf << "\n";
	rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	std::cout << *rrf << "\n";
	ppf = someRandomIntern.makeForm("Presidential Pardon", "Bob");
	std::cout << *ppf << "\n";
	noform = someRandomIntern.makeForm("wrong form name", "Bob");
	if (noform != nullptr)
		std::cout << *noform << "\n";
	
	Bureaucrat b = Bureaucrat("Usman", 10);

	b.signForm(*scf);
	b.signForm(*rrf);
	b.signForm(*ppf);

	b.executeForm(*scf);
	b.executeForm(*rrf);
	b.executeForm(*ppf);

	delete scf;
	delete rrf;
	delete ppf;
	delete noform;
}
