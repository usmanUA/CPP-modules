/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:08:46 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 12:44:47 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>

# define NOLLA 0

enum	e_literals
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NONE,
};

class	ScalarConverter
{
	private:
		ScalarConverter( void );
		~ScalarConverter( void );
		ScalarConverter( const ScalarConverter& );
		ScalarConverter&	operator=( const ScalarConverter& );
	public:
		static	void	convert( std::string number );
};

e_literals	getType( std::string literal );
void	convertChar( std::string literal, char& c, int& i, float& f, double& d );
bool	convertInt( std::string literal, char& c, int& i, float& f, double& d );
void	printConversion( char c, int i, float& f, double d );
bool	convertFloat( std::string literal, char& c, int& i, float& f, double& d );
bool	convertDouble( std::string literal, char& c, int& i, float& f, double& d );

#endif
