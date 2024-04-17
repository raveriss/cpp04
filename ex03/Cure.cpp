/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:40:59 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/17 22:44:41 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

/* Inclusion bibliothèque I/O standard */
#include <iostream>

/**
 * @brief Constructeur par défaut Cure
 */
Cure::Cure() : AMateria("cure") {}

/**
 * @brief Destructeur Cure
 */
Cure::~Cure() {}

/**
 * @brief Clone Cure, crée copie de l'objet
 */
AMateria* Cure::clone() const {
	return new Cure();
}

/**
 * @brief Utilisation de Cure sur cible
 */
void Cure::use(ICharacter & target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/*  CURE.CPP  */
