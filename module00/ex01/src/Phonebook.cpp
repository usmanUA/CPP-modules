/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 11:14:38 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/11 17:56:39 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
};

PhoneBook::~PhoneBook(void)
{
};

bool	PhoneBook::input(void)
{
	Contact	contact;

	if (contact.set_first_name(get_string(FIRST_NAME, false)) == false)
		return (false);
	if (contact.set_last_name(get_string(LAST_NAME, false)) == false)
		return (false);
	if (contact.set_nickname(get_string(NickNAME, false)) == false)
		return (false);
	if (contact.set_phone_number(get_num(PHONE)) == false)
		return (false);
	if (contact.set_darkest_secret(get_string(SECRET, true)) == false)
		return (false);
	this->contacts[this->index] = contact;
	this->index++;
	if (this->index >= PHONEBOOK_LEN)
		this->index = 0;
	return (true);
};

bool	PhoneBook::search(void)
{
	int		index;
	int		contacts;
	std::string	input;

	contacts = PHONEBOOK_LEN;
	for (int i = 0; i < PHONEBOOK_LEN; i++)
	{
		if (this->contacts[i].get_first_name().empty())
			contacts--;
	};
	if (contacts == 0)
	{
		std::cout << EMPTY;
		return (true);
	};
	phonebook(this->contacts);
	while (true)
	{
		input = get_num(INDEX);
		if (input.empty())
			return (false);
		try
		{
			index = stoi(input) - 1;
		} 
		catch (const std::out_of_range& e)
		{
			std::cout << RANGE << std::endl;
			continue;
		}
		if (index < 0 || index >= PHONEBOOK_LEN)
			std::cout << RANGE;
		else if (this->contacts[index].get_first_name().empty())
			std::cout << NOT_FOUND;
		else
			break;
	};
	contact(this->contacts[index]);
	return (true);
};
