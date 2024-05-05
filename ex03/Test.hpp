/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:13:27 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/04 13:15:58 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Test
{
    protected:

    public:
        Test();
        Test(const Test & other);
        Test & operator = (const Test & other);
        virtual ~Test();
};

/**
* @brief Constructeur par défaut Test
*/
Test::Test()
{
    std::cout << "Test Default constructor called" << std::endl;
}

/**
* @brief Opérateur d'affectation Test
*/
Test & Test::operator = (const Test & other)
{
    if (this != & other)
        *this = other;
    std::cout << "Test Copy assignment operator called" << std::endl;
    return *this;
}

/**
* @brief Constructeur de copie de la classe Test
*/
Test::Test(const Test & other) : Animal(other) 
{
    std::cout << "Test Copy constructor called" << std::endl;
}

/**
* @brief Destructeur Test
*/
Test::~Test()
{
    std::cout << "Test destructor called" << std::endl;
}