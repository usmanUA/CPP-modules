/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:32:33 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 20:35:27 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer( void )
{}

Serializer::~Serializer( void )
{}

Serializer::Serializer( const Serializer& from)
{
	(void)from;
}

Serializer&	Serializer::operator=( const Serializer& from)
{
	(void)from;
	return *this;
};

uintptr_t	Serializer::serialize( Data* ptr )
{
	return reinterpret_cast<uintptr_t>(ptr);
};

Data*	Serializer::deserialize( uintptr_t val )
{
	return reinterpret_cast<Data*>(val);
}
