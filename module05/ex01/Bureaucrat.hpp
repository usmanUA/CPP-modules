/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:19:14 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/18 10:15:53 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class	Form;

#include <exception>
#include <string>
#include <iostream>
#include "Form.hpp"

namespace Colors {
    const std::string RED = "\033[31m";
    const std::string GREEN = "\033[32m";
    const std::string RESET = "\033[0m";
}

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string, int);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat&	operator=(const Bureaucrat&);

		std::string	const	getName(void) const;
		int	getGrade(void) const;
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm( Form& );

		class GradeTooHighException : public	std::exception
		{
			public:
				const	char*	what() const throw();
		};
		class GradeTooLowException : public	std::exception
		{
			public:
				const	char*	what() const throw();
		};
	private:
		std::string	const	Name;
		int	Grade;
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat&);

#endif
