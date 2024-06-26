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
		void	announce(void);
		void	give_name(std::string name);
		~Zombie(void);
	private:
		std::string	name;
};
