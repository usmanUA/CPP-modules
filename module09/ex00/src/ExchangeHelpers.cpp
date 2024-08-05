/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ExchangeHelpers.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:19:03 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/28 23:07:35 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <exception>

static	bool	validateDate( std::string& newDate, int* date )
{
	if (newDate.length() < 10 || newDate.at(4) != '-'|| newDate.at(7) != '-'|| newDate.at(5) == '-'|| newDate.at(8) == '-')
		return false;
	int	y, m, d;
	try
	{
		y = std::stoi(newDate.substr(0, 4));
	}
	catch (std::exception& e)
	{
		return false;
	}
	if (y < 2009 || y > 2022)
		return false;
	try
	{
		m = std::stoi(newDate.substr( 5, 7));
	}
	catch (std::exception& e)
	{
		return false;
	}
	int	months[12] = {31, 28, 31, 30, 31, 30, 31, 30, 30, 31, 30, 31};
	if (m < 1 || m > 12)
		return false;
	if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0))
		months[1]++;
	try
	{
		d = std::stoi(newDate.substr(8, newDate.length()));
	}
	catch (std::exception& e)
	{
		return false;
	}
	if (d < 1 || d > months[m - 1])
		return false;
	date[0] = y;
	date[1] = m;
	date[2] = d;
	return true;
};

void	validateLine( std::string& line, std::string& sDate, int* date, double& btcs )
{
	if (line.find(" | ", 10) == std::string::npos)
		throw 1;
	sDate = std::strtok((char *)line.c_str(), " |");
	std::string newDate(sDate);
	if (validateDate( newDate, date ) == false)
		throw 1;
	btcs = std::stod(std::strtok(NULL, " |"));
	if (btcs < 1)
		throw 2;
	if (btcs > 1000)
		throw 3;
};

