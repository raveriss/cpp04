/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:26:56 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/07 00:34:33 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**
 * @brief Constructeur par défaut Cat
 */
Cat::Cat() : Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

/**
 * @brief Destructeur Cat
 */
Cat::~Cat()
{
	if (_brain != NULL)
	{
		delete _brain;
		_brain = NULL;
	}
	std::cout << "Cat destructor called" << std::endl;
}

/**
 * @brief Constructeur de copie Cat
 */
Cat::Cat(const Cat & originCat) : Animal(originCat)
{
	_brain = new Brain(*originCat._brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

/**
 * @brief Opérateur d'affectation Cat
 */
Cat & Cat::operator = (const Cat & root)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != & root) {
        Animal::operator=(root);
        if (_brain != NULL)
		{
			delete _brain;
			_brain = NULL;
		}
        _brain = new Brain(*root._brain);
    }
    return *this;
}

/**
 * @brief Émission sonore spécifique Cat
 */
void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

Brain* Cat::getBrain() const {
    return _brain;
}
