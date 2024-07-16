/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:46:38 by uahmed            #+#    #+#             */
/*   Updated: 2024/07/14 09:46:50 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	if (1)
	{
		std::cout << "\033[32m" << "\nOriginal dog:\n" << "\033[0m";
		Dog dog = Dog();
		std::cout << "Ideas:\n";
		dog.getBrain()->addIdea("great idea!");
		dog.getBrain()->addIdea("not so great idea!");
		dog.getBrain()->printIdeas();

		std::cout << "\033[32m" << "\nCopy construct dog:\n" << "\033[0m";
		Dog dogCopy = Dog(dog);
		std::cout << "Ideas (+ wow):\n";
		dogCopy.getBrain()->addIdea("wow!");
		dogCopy.getBrain()->printIdeas();

		std::cout << "\033[32m" << "\nCopy equal dog:\n" << "\033[0m";
		Dog dogCopy2;
		dogCopy2 = dog;
		std::cout << "Ideas (+ amazing):\n";
		dogCopy2.getBrain()->addIdea("amazing!");
		dogCopy2.getBrain()->printIdeas();

		std::cout << "\033[32m" << "\nOriginal dog:\n" << "\033[0m";
		dog.getBrain()->printIdeas();

		std::cout << "\033[32m" << "\nDestruction:\n" << "\033[0m";
	}

	const int amount = 6;
	Animal* animals[amount];

	std::cout << "\033[36m" << "\nDog construction:\n" << "\033[0m";
	for (int i = 0; i < amount / 2; i++)
		animals[i] = new Dog();
	
	std::cout << "\033[36m" << "\nCat construction:\n" << "\033[0m";
	for (int i = amount / 2; i < amount; i++)
		animals[i] = new Cat();

	std::cout << "\033[36m" << "\nSounds:\n" << "\033[0m";
	for (int i = 0; i < amount; i++)
		animals[i]->makeSound();

	std::cout << "\033[36m" << "\nDestruction:\n" << "\033[0m";
	for (int i = 0; i < amount; i++)
		delete animals[i];
	
	return 0;
}
