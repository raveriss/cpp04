/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:33:55 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/06 13:43:49 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

/* Inclusion bibliothèque I/O standard */
#include <iostream>

/**
 * @brief Classe Cure dérivée de AMateria
 * @motclef classe, héritage, AMateria, soins
 * @méthodes constructeur, destructeur, clone, utilisation sur cible
 */
class Cure : public AMateria
{
	public:
		/*  Constructeur par défaut  */
		Cure();

		/*  Constructeur de recopie  */
		Cure(const Cure & rootCure);

		/*  Opérateur d’affectation  */
		Cure & operator = (const Cure & rootCure);

		/*  Desctructor  */
		~Cure();

		AMateria * clone() const;
		void use(ICharacter & target);
};

/*  CURE.HPP  */