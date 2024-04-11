/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:03:00 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/11 16:25:54 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const { return type; }




