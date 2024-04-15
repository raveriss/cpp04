/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:48:21 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 16:07:31 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

/**
 * @brief Fonction principale pour tester polymorphisme avec Animal
 * @motclef fonction principale, polymorphisme, Animal, Dog, Cat, WrongCat
 * @action création d'objets, affichage type, émission sons, destruction d'objets
 */
// int main() {
//     const int size = 6;
//     Animal * animals[size];

//     for (int i = 0; i < size; i++) {
//         if (i < size / 2)
//             animals[i] = new Dog();
//         else
//             animals[i] = new Cat();
//     }

//     for (int i = 0; i < size; i++) {
//         std::cout << animals[i]->getType() << " makes a sound: ";
//         animals[i]->makeSound();
//     }

//     for (int i = 0; i < size; i++) {
//         delete animals[i];
//     }

//     return 0;
// }


/**
 * @brief Fonction principale pour tester polymorphisme avec Animal
 * @motclef fonction principale, polymorphisme, Animal, Dog, Cat, WrongCat
 * @action création d'objets, affichage type, émission sons, destruction d'objets
 */
int main() {
    Animal* cat = new Cat();
    Animal* dog = new Dog();

    std::cout << cat->getType() << " makes a sound: ";
    cat->makeSound();
    std::cout << dog->getType() << " makes a sound: ";
    dog->makeSound();

    delete cat;
    delete dog;

    return 0;
}




