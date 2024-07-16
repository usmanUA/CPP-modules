/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:50:01 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/14 09:52:06 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal
{

	public:
		Cat(void);
		Cat(const Cat&);
		Cat&	operator=(const Cat&);
		~Cat(void);
		void	makeSound(void)	const;
};

# endif
