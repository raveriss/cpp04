/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:33:55 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/07 01:23:23 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut FragTrap
 */
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

/**
 * @brief Opérateur d'affectation FragTrap
 */
WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other) {
    if (this != & other) {
        this->_type = other._type;
    }
    return *this;
}

/**
 * @brief Constructeur de copie FragTrap
 */
WrongAnimal::WrongAnimal(const WrongAnimal & other) {
    *this = other;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

/**
 * @brief Émission sonore spécifique WrongAnimal
 */
void WrongAnimal::makeSound() const {
    std::cout << "This is a WrongAnimal sound!" << std::endl;
}

/**
 * @brief Accesseur type WrongAnimal
 */
std::string WrongAnimal::getType() const {
    return _type;
}

/**
 * @brief Destructeur FragTrap
 */
WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}