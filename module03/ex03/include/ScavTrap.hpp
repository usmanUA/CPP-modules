/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 23:42:16 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/09 23:46:53 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string&);
		ScavTrap( const ScavTrap& );
		~ScavTrap(void);
		void	attack(const std::string&);
		void	guardGate();
};

# endif
