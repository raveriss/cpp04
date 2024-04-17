/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:33:32 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/17 22:39:17 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

/* Inclusion bibliothèque I/O standard */
#include <iostream>

/**
 * @brief Classe Ice dérivée de AMateria
 * @motclef classe, héritage, AMateria, attaque de glace
 * @méthodes constructeur, destructeur, clone, utilisation sur cible
 */
class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		virtual AMateria * clone() const;
		virtual void use(ICharacter & target);
};

/*  ICE.HPP  */

