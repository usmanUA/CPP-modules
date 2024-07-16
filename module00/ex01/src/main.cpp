# include "Phonebook.hpp"

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
		{
			if (phonebook.search() == false)
				break;
		}
	}
	return (0);
};
