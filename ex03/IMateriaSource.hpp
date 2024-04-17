/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:37:16 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/17 22:37:07 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

/* Inclusion bibliothèque types chaîne */
#include <string>

/**
 * @brief Interface IMateriaSource
 * @motclef interface, gestion matérias, apprentissage, création
 * @méthodes destructeur virtuel, apprendre matéria, créer matéria par type
 */
class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria * createMateria(std::string const & type) = 0;
};

/*  IMATERIASOURCE_HPP  */
