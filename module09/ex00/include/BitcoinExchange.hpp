/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 21:29:58 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/27 19:28:36 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include "map"
#include "iostream"
#include <fstream>
#include "string"
#include <cstring>
#include <exception>
#include <iomanip>
#include <sstream>

class	BitcoinExchange
{
	public:
		BitcoinExchange( void );
		~BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange& );
		BitcoinExchange&	operator=( const BitcoinExchange& );

		void	exchangeBTC( char * );
		void	printExchangedBTC( void );
		bool	getStatus( void );
		void	printXRate( void );
		void	printPortfolio( std::string& sDate, int* date, double& btcs );
	private:
		std::map<std::string, double>	xRate;
		bool	status;
		std::map<std::string, double>	parseXRate( void );
};

void	validateLine( std::string& line, std::string& sDate, int* date, double& btcs );
void	printPortfolio( int* date, int& btcs );
#endif
