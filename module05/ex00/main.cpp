/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:36:54 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/18 10:37:29 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

void bureaucrat(std::string name, int grade)
{
	try
	{
		std::cout << "\033[36mCreating bureaucrat " << name << " with grade " << grade << "\033[0m\n";
		Bureaucrat b = Bureaucrat(name, grade);
		std::cout << b << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n";
}

int main()
{
	bureaucrat("Usman", 42);
	bureaucrat("Usman", 1);
	bureaucrat("Usman", 150);
	bureaucrat("Usman", 0);
	bureaucrat("Usman", -42);
	bureaucrat("Usman", 151);

	Bureaucrat one = Bureaucrat("Usman", 2);
	std::cout << one << "\n";
	try
	{
		std::cout << "\033[36mAttempting to increment grade\033[0m\n";
		one.incrementGrade();
		std::cout << one << "\n";
		std::cout << "\033[36mAttempting to increment grade\033[0m\n";
		one.incrementGrade();
		std::cout << one << "\n";
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
		std::cout << one << "\n";
	}

	Bureaucrat onefifty = Bureaucrat("Usman", 149);
	std::cout << "\n" << onefifty << "\n";
	try
	{
		std::cout << "\033[36mAttempting to increment grade\033[0m\n";
		onefifty.decrementGrade();
		std::cout << onefifty << "\n";
		std::cout << "\033[36mAttempting to increment grade\033[0m\n";
		onefifty.decrementGrade();
		std::cout << onefifty << "\n";
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
		std::cout << onefifty << "\n";
	}

	std::cout << "\n\033[36mCopy test:\033[0m\n";
	Bureaucrat copy = Bureaucrat(one);
	copy.decrementGrade();
	std::cout << "\033[36mCopy: \033[0m" << copy << "\n";
	std::cout << "\033[36mOriginal: \033[0m" << one << "\n";
	copy = onefifty;
	copy.incrementGrade();
	std::cout << "\033[36mCopy: \033[0m" << copy << "\n";
	std::cout << "\033[36mOriginal: \033[0m" << onefifty << "\n";
}
