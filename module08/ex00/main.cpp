/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:30:37 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/21 11:33:03 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    std::cout << "\033[32mTesting with Ints\033[0m\n";
    std::cout << "{";
    for (int val : vec) {
        std::cout << val << ",";
    }
    std::cout << "}" << std::endl;
    if (easyfind(vec, 6))
        std::cout << "Found 6 in vec" << std::endl;
    else
        std::cout << "Not-Found 6 in vec" << std::endl;
    if (easyfind(vec, 2))
        std::cout << "Found 2 in vec" << std::endl;
    else
        std::cout << "Not-Found 2 in vec" << std::endl;

    // STRING TEST
    std::cout << "\033[32mTesting with string\033[0m\n";
    std::string str = "Hello";

    if (easyfind(str, 'e'))
    	std::cout << "Found e!\n";
    else
    	std::cout << "Did not find e!\n";

    if (easyfind(str, 'a'))
    	std::cout << "Found a!\n";
    else
    	std::cout << "Did not find a!\n";

    return 0;
}

