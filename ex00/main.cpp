/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:48:21 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/07 01:21:50 by raveriss         ###   ########.fr       */
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
int main()
{
    const Animal * meta = new Animal();
    const Animal * dog = new Dog();
    const Animal * cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    const WrongAnimal * wrongCat = new WrongCat();
    wrongCat->makeSound();
    delete wrongCat;

    return 0;
}