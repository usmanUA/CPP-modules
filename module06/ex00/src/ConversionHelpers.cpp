/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionHelpers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:30:34 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 12:45:34 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include <limits>

bool	literalIsInt( std::string literal )
{
	int	i = 0;
	for (auto c : literal)
	{
		if (!std::isdigit( c ) && !(i == 0 && c == '-'))
			return (false);
		i++;
	}
	return true;
};

e_literals	getType( std::string literal )
{
	if (literal.length() == 1 && !isdigit(literal[0]))
		return CHAR;
	if (literalIsInt( literal ))
		return INT;
	size_t	dot = literal.find(".");
	if (dot != std::string::npos && literalIsInt( literal.substr(0, dot) ))
	{
		std::string fraction = literal.substr(dot + 1, std::string::npos);
		if (literalIsInt( fraction ))
			return DOUBLE;
		size_t	len = fraction.length();
		if (literalIsInt( fraction.substr(0, len - 1) ) && fraction[len - 1] == 'f')
			return FLOAT;
	}
	if (literal == "+inf" || literal == "-inf" || literal == "nan")
		return DOUBLE;
	if (literal == "+inff" || literal == "-inff" || literal == "nanf")
		return FLOAT;
	return NONE;
};

void	printChar( char c, int i )
{
	if (i >= 0 && i <= 255 && isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (i >= 0 && i <= 255)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
};

void	printInt( int i, double d )
{
	std::cout << "int: ";
	if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
		std::cout << i << std::endl;
	else
		std::cout << "impossible" << std::endl;
};

void	printConversion( char c, int i, float& f, double d )
{
	if (d == i)
		std::cout << std::fixed << std::setprecision(1);
	printChar( c, i );
	printInt( i, d );
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
};

void	convertChar( std::string literal, char& c, int& i, float& f, double& d )
{
	c = literal[0];
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
};

bool	convertInt( std::string literal, char& c, int& i, float& f, double& d )
{
	try
	{
		i = std::stoi(literal);
		c = static_cast<char>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	}
	catch (std::exception& e)
	{
		std::cout << "Invalid number" << std::endl;
		return false;
	}
	return true;
};
bool	convertFloat( std::string literal, char& c, int& i, float& f, double& d )
{
	try
	{
		f = std::stof(literal);
		c = static_cast<char>(f);
		i = static_cast<int>(f);
		d = static_cast<double>(f);
	}
	catch (std::exception& e)
	{
		std::cout << "Invalid float" << std::endl;
		return false;
	}
	return true;
};

bool	convertDouble( std::string literal, char& c, int& i, float& f, double& d )
{
	try
	{
		d = std::stod(literal);
		c = static_cast<char>(d);
		i = static_cast<float>(d);
		f = static_cast<double>(d);
	}
	catch (std::exception& e)
	{
		std::cout << "Invalid double" << std::endl;
		return false;
	}
	return true;
};
