/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:29:24 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/19 18:49:52 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef AFORM_HPP
#define AFORM_HPP

class	Bureaucrat;

#include <exception>
#include <string>
#include "Bureaucrat.hpp"

class	AForm
{
	public:
		AForm(void);
		AForm(std::string, const	int, const int);
		AForm(const AForm&);
		virtual ~AForm(void);
		AForm&	operator=(const AForm&);

		std::string	const	getName(void)	const;
		bool	getisItSigned(void);
		int	getGradeSign(void) const;
		int	getGradeExec(void) const;
		void	beSigned(const Bureaucrat&);
		void	execute(Bureaucrat const& ) const;
		virtual	void	executeFormAction( void ) const	= 0;

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
		class	FormNotSignedException	: public	std::exception
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

std::ostream&	operator<<(std::ostream&, const AForm&);
#endif
