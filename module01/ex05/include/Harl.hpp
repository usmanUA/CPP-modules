/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:34:51 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/29 19:35:23 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HARL_HPP
# define HARL_HPP

# include "string"
# include "iostream"

# define DEBUG "I love having extra bacon for my double-cheese burger. I really do!"
# define INFO "I cannot believe adding extra bacon costs more money."
# define WARNING "I deserve to have extra bacon for free. I’ve been coming for years."
# define ERROR "This is unacceptable! I want to speak to the manager now."

class	Harl
{
	public:
		typedef void (Harl::*funcP) (void);
		void    complain(std::string level);
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif
