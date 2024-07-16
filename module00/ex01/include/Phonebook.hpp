/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:21:08 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/11 14:37:24 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "Macros.hpp"
# include <iostream>
# include <string>
# include <iomanip>

# define PHONEBOOK_LEN 8
# define COL_LEN 10

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		bool	input();
		bool	search();

	private:
		int	index;
		Contact	contacts[PHONEBOOK_LEN];
};

std::string	get_string(std::string prompt, bool secret);
std::string	get_num(std::string prompt);
void	print_format(std::string s);
void	phonebook(Contact contacts[]);
void	contact(Contact contact);

# endif
