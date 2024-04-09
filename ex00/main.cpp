/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:41:13 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/15 14:51:04 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    return 0;
}

// int main() {
//     const Animal* meta = new Animal();
//     const Animal* dog = new Dog();
//     const Animal* cat = new Cat();
//     const WrongAnimal* wrongMeta = new WrongAnimal();
//     const WrongAnimal* wrongCat = new WrongCat();

//     std::cout << dog->getType() << " " << std::endl;
//     std::cout << cat->getType() << " " << std::endl;
//     std::cout << wrongCat->getType() << " " << std::endl;


//     dog->makeSound();
//     cat->makeSound();
//     meta->makeSound();
//     wrongCat->makeSound(); // Notez ici que c'est le son de WrongAnimal qui est utilisé, pas celui de WrongCat
//     wrongMeta->makeSound();

//     delete meta;
//     delete dog;
//     delete cat;
//     delete wrongMeta;
//     delete wrongCat;

//     return 0;
// }
