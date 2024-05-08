/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:33:55 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/08 19:22:00 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut WrongAnimal
 */
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

/**
 * @brief Opérateur d'affectation WrongAnimal
 */
WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other) {
    if (this != & other) {
        this->_type = other._type;
    }
    return *this;
}

/**
 * @brief Constructeur de copie WrongAnimal
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
 * @brief Destructeur WrongAnimal
 */
WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}