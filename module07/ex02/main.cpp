/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:20:31 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/21 10:10:18 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Array.hpp"

#define MAX_VAL 750

template <typename T>
void printArray(Array<T> arr)
{
	std::cout << "\033[33m{";
	for (size_t i = 0; i < arr.size(); i++)
	{
		if (i != 0)
			std::cout << ", ";
		std::cout << arr[i];
	}
	std::cout << "}\033[0m\n";
}

int main(int, char**)
{
	Array<int> empty = Array<int>();
	std::cout << "\033[32mAttempting to read first element of Int Array of size 0:\033[0m \n";
	try
	{
		std::cout << empty[0] << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}

	std::cout << "\033[32mInt Array of size 10:\033[0m \n";
	Array<int> ints = Array<int>(10);
	printArray(ints);

	Array<int> copy1 = Array<int>(ints);
	for (size_t i = 0; i < copy1.size(); i++)
		copy1[i] = i;

	Array<int> copy2 = Array<int>();
	copy2 = copy1;
	for (size_t i = 0; i < copy2.size(); i++)
		copy2[i] = i * i;

	std::cout << "\033[32mInt Array of size 10:\033[0m \n";
	printArray(ints);
	std::cout << "\033[32mInt Array of size 10 copied:\033[0m \n";
	printArray(copy1);
	std::cout << "\033[32mInt Array of size 10 copied:\033[0m \n";
	printArray(copy2);

	std::cout << "\033[32mInt Array at Index 10:\033[0m \n";
	try
	{
		std::cout << ints[10] << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}

	std::cout << "\033[32mStr Array of size 3 (with NULL elements):\033[0m \n";
	Array<std::string> strs = Array<std::string>(3);
	printArray(strs);
	std::cout << "\033[32mAttempting to Write 4 elements to Str Array of size 3:\033[0m \n";
	try
	{
		strs[0] = "hello";
		strs[1] = "there";
		strs[2] = "hi";
		strs[3] = "there";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "\033[32mWritten Str Array of size 3 (with NON-NULL elements):\033[0m \n";
	printArray(strs);

	std::cout << "\033[32mSubject Main Tests):\033[0m \n";

	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
	    const int value = rand();
	    numbers[i] = value;
	    mirror[i] = value;
	}
	//SCOPE
	{
	    Array<int> tmp = numbers;
	    Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
	    if (mirror[i] != numbers[i])
	    {
	        std::cerr << "didn't save the same value!!" << std::endl;
	        return 1;
	    }
	}
	try
	{
	    numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
	    std::cerr << e.what() << '\n';
	}
	try
	{
	    numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
	    std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
	    numbers[i] = rand();
	}
	delete [] mirror;//

	return 0;
}
