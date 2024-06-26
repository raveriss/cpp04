/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:32:40 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/03 13:14:41 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/* Inclusion bibliothèque types chaîne */
#include <string>

/* Inclusion bibliothèque I/O standard */
#include <iostream>

/**
 * @brief Interface ICharacter
 * @motclef interface, personnage, interactions
 * @description Définit les interactions possibles pour les personnages manipulant des AMateria
 */
class ICharacter;

/**
 * @brief Classe de base AMateria
 * @motclef classe, AMateria, matéria, polymorphisme, abstraction
 * @attribut type
 * @méthodes constructeur paramétré, destructeur, accesseur type, clone, utilisation
 * @note clone est une méthode virtuelle pure pour duplication polymorphique
 */
class AMateria
{
	protected:
		std::string type;
	public:
		/*  Constructeur par défaut  */
		AMateria();
		
		/*  Constructeur paramétré  */
		AMateria(std::string const & type);

		/*  Constructeur de recopie  */
		AMateria(const AMateria & other);
		
		/*  Opérateur d’affectation  */
		AMateria & operator = (const AMateria & other);

		/*  Desctructor  */
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria * clone() const = 0;
		virtual void use(ICharacter & target);
};

/*  AMATERIA.HPP  */

