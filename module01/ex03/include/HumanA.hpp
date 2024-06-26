/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 23:10:02 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/26 08:30:57 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include "iostream"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack(void);
	private:
		std::string	name;
		Weapon&	weapon;
};

#endif
