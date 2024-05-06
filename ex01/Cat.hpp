/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:50:37 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/06 20:59:48 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

/**
 * @brief Classe Cat, dérivée de Animal
 * @motclef classe, héritage, Cat, Animal, son spécifique
 * @méthodes constructeur, destructeur, constructeur de copie, opérateur d'affectation,
 * émission sonore spécifique
 */
class Cat : public Animal
{
	private:
		Brain * _brain;
	public:
		Cat();
		Cat & operator = (const Cat & originCat);
		Cat(const Cat & originCat);
		virtual ~Cat();

		void makeSound() const;
		Brain* getBrain() const;

};
