/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:24:21 by uahmed            #+#    #+#             */
/*   Updated: 2024/06/22 21:24:27 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cctype>

# define PHONE "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"

bool	strtrim(std::string &s)
{
	char	ws[6] = {' ', '\t', '\n', '\r', '\v', '\f'};
	size_t	n;

	n = s.find_first_not_of(ws);
	if (n == std::string::npos)
		return (false);
	s.erase(0,n);
	n = s.find_last_not_of(ws);
	s.erase(n, s.length());
	return (true);
};

void	lower_to_upper(std::string &s)
{
	for (size_t i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
};

void	megaphone(int tot, char **args)
{
	for (int i = 1; i < tot; i++)
	{
		std::string s = args[i];
		if (strtrim(s) == false)
			continue ;
		lower_to_upper(s);
		std::cout << s;
		if (i < tot - 1)
			std::cout << " ";
	}
	std::cout << "\n";
};

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << PHONE;
	else
		megaphone(argc, argv);
};
