/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 21:23:30 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/11 15:27:33 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "string"
# include "iostream"

class Zombie
{
	public:
		void	announce(void);
		void	give_name(std::string name);
		Zombie(void);
		~Zombie(void);
	private:
		std::string	name;
};
