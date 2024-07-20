/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:29:24 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 20:31:42 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>

struct	Data
{
	int	x;
};

class	Serializer
{
	private:
		Serializer( void );
		~Serializer( void );
		Serializer( const Serializer& );
		Serializer&	operator=( const Serializer& );
	public:
		static	uintptr_t	serialize(Data* ptr);
		static	Data*	deserialize(uintptr_t raw);
};

#endif
