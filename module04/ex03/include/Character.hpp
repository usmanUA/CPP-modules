/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:46:00 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/15 19:49:51 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
#include "ex03/ICharacter.hpp"

class	Character:	public ICharacter
{
	public:
		Character( void );
		Character( std::string name );
		Character( const Character& );
		Character& operator=( const Character& );
		~Character( void );

		std::string const & getName( void ) const;
		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter& target );
	private:
		std::string name;
		AMateria* inventory[4] {};
};

#endif
