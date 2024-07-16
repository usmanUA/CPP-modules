/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:49:37 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/14 09:49:54 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "string"
# include "iostream"

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal&);
		WrongAnimal&	operator=(const WrongAnimal&);
		virtual	~WrongAnimal(void);
		std::string	getType(void) const;
		virtual	void	makeSound(void)	const;
};

# endif
