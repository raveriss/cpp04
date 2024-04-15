/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:50:25 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 13:52:45 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

/**
 * @brief Classe Dog, dérivée de Animal
 * @motclef classe, héritage, Dog, Animal, son spécifique
 * @méthodes constructeur, destructeur, constructeur de copie, opérateur d'affectation,
 * émission sonore spécifique
 */
class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog & other);
        Dog & operator = (const Dog & other);

        void makeSound() const;
};

