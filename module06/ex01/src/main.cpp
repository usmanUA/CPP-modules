/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:32:09 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/20 20:39:53 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data data;
	data.x = 42;

	uintptr_t raw = Serializer::serialize(&data);
	Data* data_ptr = Serializer::deserialize(raw);

	std::cout << "data.x = " << data.x << "\n";
	std::cout << "&data = " << &data << "\n\n";
	
	std::cout << "serialized uint_ptr = " << raw << "\n";
	std::cout << "deserialized data_ptr = " << data_ptr << "\n\n";

	std::cout << "original == deserialized: " << (&data == data_ptr ? "True" : "False") << "\n";
	std::cout << "original.x = " << data.x << ", deserialized.x = " << data_ptr->x << "\n";

	//Serializer s = Serializer(); // Cannot initialize
};
