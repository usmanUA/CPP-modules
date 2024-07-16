/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:21:41 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/15 09:24:36 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure: public	AMateria
{
	public:
		Cure(void);
		Cure(const Cure&);
		~Cure(void);
		Cure&	operator=(const Cure&);

		AMateria*	clone()	const;
		void	use(ICharacter&);
};

#endif
