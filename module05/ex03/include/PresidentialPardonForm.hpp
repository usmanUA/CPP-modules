/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:58:30 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/19 18:59:06 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm( void );
		~PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm& );
		PresidentialPardonForm&	operator=( const PresidentialPardonForm& );

		void	executeFormAction( void )	const;
	public:
		std::string	target;

};

#endif
