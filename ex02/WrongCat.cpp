/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:29:14 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/08 19:22:22 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut WrongCat
 */
WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

/**
 * @brief Opérateur d'affectation WrongCat
 */
WrongCat & WrongCat::operator = (const WrongCat & other) {
    if (this != & other) {
        this->_type = other._type;
    }
    return *this;
}

/**
 * @brief Constructeur de copie WrongCat
 */
WrongCat::WrongCat(const WrongCat & other) : WrongAnimal(other) {
    *this = other;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

/**
 * @brief Destructeur WrongCat
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
