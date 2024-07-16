/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:44:17 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/10 10:47:32 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string&);
		FragTrap(const FragTrap&);
		FragTrap&	operator=(const FragTrap&);
		~FragTrap(void);
		void	highFivesGuys(void);
};

# endif
