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

# define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
# define INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
# define ERROR "This is unacceptable! I want to speak to the manager now."
# define DEFAULT "[ Probably complaining about insignificant problems ]\n"
# define USAGE "USAGE:\n	./harlfilter <level>\n"

class	Harl
{
	public:
		void    complain(std::string level);
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif
