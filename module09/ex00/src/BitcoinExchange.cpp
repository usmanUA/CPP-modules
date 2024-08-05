/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 08:19:42 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/27 19:28:40 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void )
{
	try
	{
		this->xRate = this->parseXRate();
		this->status = true;
	}
	catch (int e)
	{
		this->status = false;
		std::cout << "Error opening file\n";
	};
}

BitcoinExchange::~BitcoinExchange( void )
{}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& from )
{
	*this = from;
}

BitcoinExchange&	BitcoinExchange::operator=( const BitcoinExchange& from )
{
	if (this != &from)
	{
		this->xRate.clear();
		this->xRate = from.xRate;
		this->status = from.status;
	}
	return *this;
}

std::map<std::string, double>	BitcoinExchange::parseXRate( void )
{
	std::ifstream	inputFile("data.csv");
	if (!inputFile.is_open())
		throw 1;
	std::string	line;
	std::map<std::string, double>	xRate;
	std::getline(inputFile, line);
	while (std::getline(inputFile, line))
	{
		int	pos = line.find(",");
		try
		{
			xRate.insert({std::string().append(line, 0, pos), std::stod(std::string().append(line, pos+1, line.length() - pos))});
		}
		catch (int e)
		{
			throw 1;	
		}
	}
	return xRate;
}

void	BitcoinExchange::exchangeBTC( char *btcValFile )
{
	std::ifstream	inFile(btcValFile);
	if (!inFile.is_open())
		return;
	std::string	line;
	std::string	sDate;
	std::map<std::string, double>	xRate;
	std::getline(inFile, line);
	double	btcs;
	int	date[3];
	while (std::getline(inFile, line))
	{
		try
		{
			validateLine( line, sDate, date, btcs);
		}
		catch (int e)
		{
			if (e == 1)
				std::cout << "Error: bad input => " << line << "\n";
			else if (e == 2)
				std::cout << "Error: not a positive number.\n";
			else if (e == 3)
				std::cout << "Error: too large a number.\n";
			continue;
		}
		printPortfolio( sDate, date, btcs );
	};
}

void	BitcoinExchange::printExchangedBTC( void )
{

}

bool	BitcoinExchange::getStatus( void )
{
	return this->status;
}

void	BitcoinExchange::printPortfolio( std::string& sDate, int* date, double& btcs )
{
	if (this->xRate.count(sDate))
	{
		std::cout << sDate << " => " << btcs << " = " << this->xRate[sDate] * btcs << std::endl;
		return;
	}
	int	y = date[0];
	int	m = date[1];
	int	d = date[2];
	while (y > 2008)
	{
		while (m > 0)
		{
			while (d > 0)
			{
				std::ostringstream oDate;
				oDate << y << "-" << std::setw(2) << std::setfill('0') << m << "-" << std::setw(2) << std::setfill('0') << d;
				std::string newDate(oDate.str());
				if (this->xRate.count(newDate))
				{
					std::cout << newDate << " => " << btcs << " = " << this->xRate[newDate] * btcs << std::endl;
					return;
				}
				--d;
			}
			d = 31;
			--m;
		}
		m = 12;
		--y;
	}
};

void	BitcoinExchange::printXRate( void )
{
	for (auto pair : this->xRate)
	{
		std::cout << pair.first << ": " << pair.second << std::endl;
	}
};
