/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:48:21 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/12 17:43:16 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

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


#pragma once

#include <string>
#include <iostream>

class Dog {
    protected:

    public:
        Dog();
        Dog(const Dog & other);
        Dog & operator=(const Dog & other);
        virtual ~Dog();
};

/**
 * @brief Constructeur par défaut Dog
*/
Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
}

/**
* @brief Constructeur de copie Dog
*/
Dog::Dog(const Dog & other)
{
    *this = other;
    std::cout << "Dog Copy constructor called" << std::endl;
}

/**
* @brief Opérateur d'affectation Dog
*/
Dog & Dog::operator= (const Dog & other)
{
    if (this != &other) {
        *this = other;
    }
    return *this;
}

/**
* @brief Destructeur Dog
*/
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
