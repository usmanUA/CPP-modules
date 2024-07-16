/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:46:51 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/13 10:30:35 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "string"
# include "iostream"

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal&);
		Animal&	operator=(const Animal&);
		virtual	~Animal(void);
		std::string	getType(void) const;
		virtual	void	makeSound(void)	const = 0;
};

# endif
