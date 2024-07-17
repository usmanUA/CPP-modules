/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:52:35 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/15 19:56:38 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual	~IMateriaSource(void)	{}	
		virtual	void	learnMateria(AMateria*)	= 0;	
		virtual	AMateria*	createMateria(std::string const & type) = 0;
};

#endif
