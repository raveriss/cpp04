/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:26:05 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/11 16:26:07 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {}

Dog& Dog::operator=(const Dog& other) {
    Animal::operator=(other);
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}
