/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:26:56 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/08 19:21:18 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**
 * @brief Constructeur par défaut Cat
 */
Cat::Cat() 
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

/**
 * @brief Destructeur Cat
 */
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

/**
 * @brief Constructeur de copie Cat
 */
Cat::Cat(const Cat & other) : Animal(other) {}

/**
 * @brief Opérateur d'affectation Cat
 */
Cat & Cat::operator=(const Cat & other)
{
    if (this != & other) {
        this->type = other.type;
    }
    return * this;
}

/**
 * @brief Émission sonore spécifique Cat
 */
void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
