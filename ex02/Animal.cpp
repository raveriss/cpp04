/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:03:00 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 14:46:40 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**
 * @brief Constructeur par défaut Animal
 */
Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

/**
 * @brief Destructeur Animal
 */
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

/**
 * @brief Constructeur de copie Animal
 */
Animal::Animal(const Animal & other) : _type(other._type)  // Utilisation de l'initialisation de liste pour copier directement
{
	std::cerr << "Animal copy constructor called. Type: " << _type << std::endl;
}

/**
 * @brief Opérateur d'affectation Animal
 */
Animal & Animal::operator = (const Animal & other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != & other) {
		this->_type = other._type;
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
	return _type;
}




