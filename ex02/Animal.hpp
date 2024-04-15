/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:46:25 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 01:42:16 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

/**
 * @brief Classe Animal
 * @motclef classe, Animal, type, son, héritage, polymorphisme
 * @méthodes constructeur, constructeur de copie, opérateur d'affectation, destructeur,
 * émission sonore, accesseur type
 */
class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal & );
		Animal & operator=(const Animal & main_Animal);
		virtual ~Animal();

		
		virtual void makeSound() const = 0;
		std::string getType() const;
};





