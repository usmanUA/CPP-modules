# include "../include/Phonebook.hpp"
# include <iostream>
#include <string>


int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	while (true)
	{
		std::cout << PROMPT;
		if (!getline(std::cin, input))
			return (1);
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			if (phonebook.input() == false)
				break;
		}
		else if (input == "SEARCH")
			phonebook.search();
	}
	return (0);
};
