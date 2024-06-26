/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 09:49:30 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/23 11:14:38 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <ctime>
# include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << "\n";
};

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << "\n";
};

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
};

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
};

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
};

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
};

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << "\n";
};

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_totalNbDeposits++;
	_nbDeposits++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_totalNbDeposits << "\n";
};

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << "\n";
		return (false);
	};
	std::cout << withdrawal << "\n";
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	_nbWithdrawals++;
	return (true);
};

int	Account::checkAmount(void) const
{
	return (_totalAmount);
};

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << "\n";
};

void	Account::_displayTimestamp(void)
{
	time_t	t;
	tm	*now;

	t = time(0);
	now = localtime(&t);
	std::cout << "[";
	std::cout << now->tm_year << now->tm_mon << now->tm_mday;
	std::cout << "_";
	std::cout << now->tm_hour << now->tm_min << now->tm_sec;
	std::cout << "] ";
};
