/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:29:14 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 13:03:30 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut FragTrap
 */
WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

/**
 * @brief Opérateur d'affectation FragTrap
 */
WrongCat & WrongCat::operator = (const WrongCat & other) {
    if (this != & other) {
        this->type = other.type;
    }
    return *this;
}

/**
 * @brief Constructeur de copie FragTrap
 */
WrongCat::WrongCat(const WrongCat & other) : WrongAnimal(other) {
    *this = other;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

/**
 * @brief Destructeur FragTrap
 */
WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

/**
 * @brief Émission sonore spécifique WrongCat
 */
void WrongCat::makeSound() const {
    std::cout << "This is a WrongCat sound!" << std::endl;
}
