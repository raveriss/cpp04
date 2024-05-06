/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:33:32 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/06 13:44:06 by raveriss         ###   ########.fr       */
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
		/*  Constructeur par défaut  */
		Ice();

		/*  Constructeur de recopie  */
		Ice(const Ice & rootIce);

		/*  Opérateur d’affectation  */
		Ice & operator = (const Ice & rootIce);

		/*  Desctructor  */
		~Ice();

		AMateria * clone() const;
		void use(ICharacter & target);
};

/*  ICE.HPP  */

