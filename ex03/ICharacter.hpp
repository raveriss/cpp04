/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:34:14 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/17 22:23:34 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

/**
 * @brief Déclaration anticipée de AMateria
 */
class AMateria;  // Forward declaration

/**
 * @brief Interface ICharacter
 * @motclef interface, ICharacter, interactions avec AMateria
 * @méthodes destructeur virtuel, obtenir nom, équiper AMateria, déséquiper AMateria,
 * utiliser AMateria sur cible
 */
class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria * m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter & target) = 0;
};

/* ICHARACTER_HPP */
