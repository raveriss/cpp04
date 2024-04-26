/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:50:37 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/26 21:40:21 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"


/**
 * @brief Classe Cat, dérivée de Animal
 * @motclef classe, héritage, Cat, Animal, son spécifique
 * @méthodes constructeur, destructeur, constructeur de copie, opérateur d'affectation,
 * émission sonore spécifique
 */
class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat & originCat);
		Cat & operator = (const Cat & originCat);

		void makeSound() const;
};
