/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:26:05 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/08 19:21:28 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
/**
 * @brief Constructeur par défaut Dog
 */
Dog::Dog() {
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

/**
 * @brief Opérateur d'affectation Dog
 */
Dog & Dog::operator = (const Dog & other)
{
	if (this != & other) {
		this->type = other.type;
	}
	return * this;
}

/**
 * @brief Constructeur de copie Dog
 */
Dog::Dog(const Dog & other) : Animal(other) {}

/**
 * @brief Destructeur Dog
 */
Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

/**
 * @brief Émission sonore spécifique Cat
 */
void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
