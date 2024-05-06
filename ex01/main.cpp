/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:48:21 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/07 00:38:36 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

#define GREY		"\033[0;30m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"
#define BLUE		"\033[0;34m"
#define MAGENTA		"\033[0;35m"
#define CYAN		"\033[0;36m"
#define NC			"\033[0m"

/**
 * @brief Fonction principale pour tester polymorphisme avec Animal
 * @motclef fonction principale, polymorphisme, Animal, Dog, Cat, WrongCat
 * @action création d'objets, affichage type, émission sons, destruction d'objets
 */
int main() {
	const int size = 6;
	Animal * animals[size];

	for (int i = 0; i < size; i++) {
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < size; i++) {
		std::cout << animals[i]->getType() << " makes a sound: ";
		animals[i]->makeSound();
	}

	for (int i = 0; i < size; i++) {
		delete animals[i];
	}

	std::cout << std::endl << CYAN << "TEST COPIE PROFONDE BRAIN IDEAS" << NC << std::endl;
	// Block to test deep copy
	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "Chase the ball");
	Cat originalCat;
	originalCat.getBrain()->setIdea(0, "Climb the tree");

	Dog copyDog(originalDog); // Use copy constructor
	Cat copyCat(originalCat); // Use copy constructor

	std::cout << "Original Dog Idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "    Copy Dog Idea: " << copyDog.getBrain()->getIdea(0) << std::endl;

	std::cout << "Original Cat Idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "    Copy Cat Idea: " << copyCat.getBrain()->getIdea(0) << std::endl;

	// Changing the idea in the copy to see if it affects the original
	copyDog.getBrain()->setIdea(0, "Sleep all day");
	copyCat.getBrain()->setIdea(0, "Chase mice");

	std::cout << "After changing, Original Dog Idea: " << originalDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "After changing, Original Cat Idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
	std::cout << "After changing, copyDog Dog Idea: " << copyDog.getBrain()->getIdea(0) << std::endl;
	std::cout << "After changing, copyCat Cat Idea: " << copyCat.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;

	return 0;
}



