/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:17:59 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/11 14:37:09 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

bool	Contact::set_first_name(std::string first)
{
	if (first.empty())
		return (false);
	this->FirstName = first;
	return (true);
};

bool	Contact::set_last_name(std::string last)
{
	if (last.empty())
		return (false);
	this->LastName = last;
	return (true);
};

bool	Contact::set_nickname(std::string nick)
{
	if (nick.empty())
		return (false);
	this->NickName = nick;
	return (true);
};

bool	Contact::set_phone_number(std::string phone)
{
	if (phone.empty())
		return (false);
	this->PhoneNumber = phone;
	return (true);
};

bool	Contact::set_darkest_secret(std::string secret)
{
	if (secret.empty())
		return (false);
	this->DarkestSecret = secret;
	return (true);
};

std::string Contact::get_first_name(void)
{
	return (this->FirstName);
};

std::string Contact::get_last_name(void)
{
	return (this->LastName);
};

std::string Contact::get_nickname(void)
{
	return (this->NickName);
};

std::string Contact::get_phone_number(void)
{
	return (this->PhoneNumber);
};

std::string Contact::get_darkest_secret(void)
{
	return (this->DarkestSecret);
};
