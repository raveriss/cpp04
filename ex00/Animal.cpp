/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:40:43 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/15 15:20:18 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("") {
    std::cout << "Animal default constructor called" << std::endl;
}

// Implémentation du nouveau constructeur
Animal::Animal(const std::string& type) : type(type) {
    std::cout << "Animal parametrized constructor called with type: " << type << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

const std::string& Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Some animal sound" << std::endl;
}