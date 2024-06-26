/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 23:07:17 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/25 23:17:09 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# ifndef WEAPON_H
# define WEAPON_H

# include "string"

class	Weapon
{
	private:
		std::string	type;
	public:
		const	std::string&	getType();
		void			setType(std::string type);
		Weapon(std::string type);
		~Weapon(void);
};

# endif
