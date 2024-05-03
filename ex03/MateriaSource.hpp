/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:37:48 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/03 15:20:27 by raveriss         ###   ########.fr       */
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
		/*  Constructeur par défaut  */
		MateriaSource();

		/*  Constructeur de recopie  */
		MateriaSource(const MateriaSource & rootMateriaSource);

		/*  Opérateur d’affectation  */
		MateriaSource & operator = (const MateriaSource & rootMateriaSource);

		/*  Desctructor  */
		virtual ~MateriaSource();

		void learnMateria(AMateria * m);
		AMateria * createMateria(std::string const & type);
		
		bool isEmpty() const;
};

/*  MATERIASOURCE_HPP  */

