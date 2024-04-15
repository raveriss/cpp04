/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:46:25 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 13:51:02 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

/**
 * @brief Classe Animal
 * @motclef classe, Animal, type, son, héritage, polymorphisme
 * @méthodes constructeur, constructeur de copie, opérateur d'affectation, destructeur,
 * émission sonore, accesseur type
 */
class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		// Animal(const std::string& type);  // Constructeur paramétré
		Animal(const Animal & main_Animal);
		Animal & operator = (const Animal & main_Animal);
		virtual ~Animal();

		
		virtual void makeSound() const;
		std::string getType() const;
};





