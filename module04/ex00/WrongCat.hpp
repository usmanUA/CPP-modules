/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:50:01 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/13 10:34:40 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{

	public:
		WrongCat(void);
		WrongCat(const WrongCat&);
		WrongCat&	operator=(const WrongCat&);
		~WrongCat(void);
		void	makeSound(void)	const;
};

# endif
