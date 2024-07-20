/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:21:19 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 12:43:40 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{}

ScalarConverter::~ScalarConverter( void )
{}

ScalarConverter::ScalarConverter( const ScalarConverter& from )
{
	(void)from;
};

ScalarConverter&	ScalarConverter::operator=( const ScalarConverter& from)
{
	(void)from;
	return *this;
};

void	ScalarConverter::convert( std::string literal )
{
	char	c = NOLLA;
	int	i = NOLLA;
	float	f = NOLLA;
	double	d = NOLLA;

	int	type = getType( literal );
	switch (type)
	{
		case	CHAR:
			convertChar( literal, c, i, f, d );
			break;
		case	INT:
			if (convertInt( literal, c, i, f, d ) == false)
				return;
			break;
		case	FLOAT:
			if (convertFloat( literal, c, i, f, d ) == false)
				return;
			break;
		case	DOUBLE:
			if (convertDouble( literal, c, i, f, d ) == false)
				return;
			break;
		default:
			std::cout << "Invalid input" << std::endl;
			return;
	}
	printConversion( c, i, f, d );
};
