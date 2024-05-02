/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:32:02 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/02 11:46:47 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

/**
 * @brief Classe WrongCat, dérivée de WrongAnimal
 * @motclef classe, héritage, WrongCat, WrongAnimal, son spécifique
 * @méthodes constructeur, destructeur, constructeur de copie, opérateur d'affectation,
 * émission sonore spécifique
 */
class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat & other);
    WrongCat & operator = (const WrongCat & other);

    void makeSound() const;
};
