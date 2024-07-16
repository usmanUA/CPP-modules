/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 21:23:30 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/25 21:52:50 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "string"
# include "iostream"

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	giveName(std::string name);
	private:
		std::string	name;
};
