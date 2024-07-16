/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:34:22 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/14 22:25:43 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria;

# include "string"
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	const	type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria&);
		AMateria&	operator=(const AMateria&);
		virtual	~AMateria(void);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif
