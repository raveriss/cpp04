/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:26:05 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 01:42:59 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
/**
 * @brief Constructeur par défaut Dog
 */
Dog::Dog() : Animal()
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << "Dog default constructor called" << std::endl;
}

/**
 * @brief Destructeur Dog
 */
Dog::~Dog()
{
	if (_brain != NULL)
	{
		delete _brain;
		_brain = NULL;
	}
	std::cout << "Dog destructor called" << std::endl;
}

/**
 * @brief Constructeur de copie Dog
 */
Dog::Dog(const Dog & other) : Animal(other)
{
    _brain = new Brain(*other._brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

/**
 * @brief Opérateur d'affectation Dog
 */
Dog & Dog::operator=(const Dog & other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != & other)
	{
		Animal::operator=(other);
		if (_brain != NULL)
		{
			delete _brain;
			_brain = NULL;
		}
		_brain = new Brain(*other._brain);
	}
	return *this;
}



/**
 * @brief Émission sonore spécifique Dog
 */
void Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}
