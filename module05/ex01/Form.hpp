/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:29:24 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/18 15:51:54 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FORM_HPP
#define FORM_HPP

class	Bureaucrat;

#include <exception>
#include <string>
#include "Bureaucrat.hpp"

class	Form
{
	public:
		Form(void);
		Form(std::string, const	int, const int);
		Form(const Form&);
		~Form(void);
		Form&	operator=(const Form&);

		std::string	const	getName(void)	const;
		bool	getisItSigned(void);
		int	getGradeSign(void) const;
		int	getGradeExec(void) const;
		void	beSigned(const Bureaucrat&);

		class	GradeTooHighException	: public	std::exception
		{
			public:
				const char*	what()	const	throw();
		};
		class	GradeTooLowException	: public	std::exception
		{
			public:
				const char*	what()	const	throw();
		};
	private:
		std::string	const	Name;
		bool	isItSigned;
		const	int		gradeSign;
		const	int		gradeExec;
};

std::ostream&	operator<<(std::ostream&, const Form&);
#endif
