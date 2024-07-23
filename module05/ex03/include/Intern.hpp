/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:12:03 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 09:25:35 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern( void );
		~Intern( void );
		Intern( const Intern& );
		Intern&	operator=( const Intern& );

		AForm*	makeForm( std::string Name, std::string target );
};

#endif
