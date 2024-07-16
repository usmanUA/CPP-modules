/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:51:27 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/15 19:59:06 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
#include "ex03/MateriaSource.hpp"

class	MateriaSource:	public	IMateriaSource
{
	public:
		MateriaSource( void );
		MateriaSource( const MateriaSource& );
		~MateriaSource( void );
		MateriaSource& operator=( const MateriaSource& );

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria* inventory[4] {};
};

#endif

