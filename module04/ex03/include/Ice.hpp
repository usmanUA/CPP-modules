/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:11:20 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/15 09:23:24 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class	Ice: public	AMateria
{
	public:
		Ice(void);
		Ice(const Ice&);
		~Ice(void);
		Ice&	operator=(const Ice&);

		AMateria*	clone()	const;
		void	use(ICharacter&);
};

#endif
