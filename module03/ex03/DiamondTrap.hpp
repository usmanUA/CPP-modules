/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:02:04 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/13 00:07:50 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap: virtual public ScavTrap, virtual public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string&);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap(void);
		DiamondTrap&	operator=(const DiamondTrap&);
		void whoAmI(void);
	private:
		std::string	Name;
};

#endif
