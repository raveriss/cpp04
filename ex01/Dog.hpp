/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:50:25 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/07 01:23:11 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

/**
 * @brief Classe Dog, dérivée de Animal
 * @motclef classe, héritage, Dog, Animal, son spécifique
 * @méthodes constructeur, destructeur, constructeur de copie, opérateur d'affectation,
 * émission sonore spécifique
 */
class Dog : public Animal
{
	private:
		Brain * _brain;
	public:
		Dog();
		Dog & operator = (const Dog & other);
		Dog(const Dog & other);
		virtual ~Dog();

		void makeSound() const;
		Brain* getBrain() const;
};