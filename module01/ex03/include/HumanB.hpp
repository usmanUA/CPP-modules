/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 08:15:08 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/26 08:23:49 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include "string"

class	HumanB
{
	public:
		void	attack(void);
		void	setWeapon(Weapon& weapon);
		HumanB(std::string name);
	private:
		Weapon*		weapon;
		std::string	name;
};

#endif
