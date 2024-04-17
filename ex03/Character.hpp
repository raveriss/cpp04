/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:36:43 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/17 22:36:05 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

/* Inclusion bibliothèque I/O standard */
#include <iostream>

/* Inclusion bibliothèque types standards */
#include <cstddef>

/**
 * @brief Classe Character dérivée de ICharacter
 * @motclef classe, héritage, ICharacter, gestion AMateria
 * @attribut nom, inventaire AMateria
 * @méthodes constructeur paramétré, destructeur, accesseur nom, équipement, déséquipement,
 * utilisation AMateria
 */
class Character : public ICharacter
{
	private:
		std::string name;
		AMateria * inventory[4];  // Tableau de pointeurs de type AMateria
	public:
		Character(const std::string & name);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria * m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter & target);
};

/*  CHARACTER.HPP  */

