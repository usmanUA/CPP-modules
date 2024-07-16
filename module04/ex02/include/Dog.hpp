/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:48:57 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/13 10:31:42 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog&);
		Dog&	operator=(const Dog&);
		~Dog(void);
		void	makeSound(void)	const;
		Brain*	getBrain(void);
	private:
		Brain*	brain;
};

# endif
