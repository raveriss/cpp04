/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:37:48 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/17 22:37:55 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

/* Inclusion bibliothèque types standards */
#include <cstddef>

/**
 * @brief Classe MateriaSource dérivée de IMateriaSource
 * @motclef classe, gestion matérias, stockage, création
 * @attribut tableau de AMateria
 * @méthodes constructeur, destructeur, apprentissage matérias, création matérias spécifiques
 */
class MateriaSource : public IMateriaSource
{
	private:
		AMateria * materias[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();

		void learnMateria(AMateria * m);
		AMateria * createMateria(std::string const & type);
};

/*  MATERIASOURCE_HPP  */

