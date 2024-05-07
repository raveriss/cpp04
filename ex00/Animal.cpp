/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:03:00 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/07 01:20:46 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**
 * @brief Constructeur par défaut FragTrap
 */
Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

/**
 * @brief Destructeur FragTrap
 */
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

/**
 * @brief Constructeur de copie Animal
 */
Animal::Animal(const Animal & other) : type(other.type)  // Utilisation de l'initialisation de liste pour copier directement
{
	std::cerr << "Animal copy constructor called. Type: " << type << std::endl;
}

/**
 * @brief Opérateur d'affectation FragTrap
 */
Animal & Animal::operator = (const Animal & other)
{
	if (this != & other) {
		this->type = other.type;
	}
	return *this;
}

/**
 * @brief Émission sonore spécifique WrongCat
 */
void Animal::makeSound() const
{
	std::cout << "Some generic animal sound" << std::endl;
}

/**
 * @brief Accesseur type Animal
 */
std::string Animal::getType() const
{ 
	return type;
}