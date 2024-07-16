/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_helpers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:22:34 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/11 17:53:26 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

bool	num_isdigit(std::string phone)
{
	if (phone.empty())
		return (false);
	for (int i = 0; i < phone.length(); i++)
	{
		if (!isdigit(phone[i]))
		{
			std::cout << DIGITS_ONLY << "\n";
			return (false);
		}
	};
	return (true);
};

bool	string_isalpha(std::string s)
{
	if (s.empty())
		return (false);
	for (int i = 0; i < s.length(); i++)
	{
		if (!isalpha(s[i]))
		{
			std::cout << ALPHA << "\n";
			return (false);
		}
	};
	return (true);
};

bool	string_isprint(std::string s)
{
	if (s.empty())
		return (false);
	for (int i = 0; i < s.length(); i++)
	{
		if (!isprint(s[i]))
		{
			std::cout << PRINTABLE << "\n";
			return (false);
		}
	};
	return (true);
};

std::string	get_string(std::string prompt, bool secret)
{
	std::string	input;

	do
	{
		std::cout << prompt << "\n";
		if (!getline(std::cin, input))
		{
			return (input);
		}
	}while (!secret ? !string_isalpha(input) : !string_isprint(input));
	return (input);
};

std::string	get_num(std::string prompt)
{
	std::string	phone;

	do
	{
		std::cout << prompt << "\n";
		if (!getline(std::cin, phone))
			return (phone);
	}while (num_isdigit(phone) == false);
	return (phone);
};

void	print_format(std::string s)
{
	if (s.length() < COL_LEN)
	{
		std::cout << std::setw(10);
		std::cout << s;
	}
	else
		std::cout << s.substr(0, 9) << ".";
	std::cout << "|";
};

void	phonebook(Contact contacts[])
{
	std::string	first_name;

	for (int i = 0; i < PHONEBOOK_LEN; i++)
	{
		first_name = contacts[i].get_first_name();
		if (first_name.empty())
			break;
		print_format(std::to_string(i+1));
		print_format(first_name);
		print_format(contacts[i].get_last_name());
		print_format(contacts[i].get_nickname());
		std::cout << "\n";
	};
};

void	contact(Contact contact)
{
	std::cout << "\n\n";
	std::cout << Colors::GREEN << "Searched Contact" << Colors::RESET << "\n";
	std::cout << "\n";
	std::cout << Colors::CYAN << "First Name: "    << Colors::RESET << contact.get_first_name() << "\n";
	std::cout << Colors::CYAN << "Second Name: "   << Colors::RESET << contact.get_last_name() << "\n";
	std::cout << Colors::CYAN << "NickName: "      << Colors::RESET << contact.get_nickname() << "\n";
	std::cout << Colors::CYAN << "Phone Number: "  << Colors::RESET << contact.get_phone_number() << "\n";
	std::cout << Colors::CYAN << "Darkest Secret: "<< Colors::RESET << contact.get_darkest_secret() << "\n";
	std::cout << "\n\n";
};