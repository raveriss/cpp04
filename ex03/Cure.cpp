/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:40:59 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/03 13:55:00 by raveriss         ###   ########.fr       */
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
 * @brief Constructeur de copie Cure
 * 
 * @param rootCure 
 */
Cure::Cure(const Cure & rootCure) : AMateria(rootCure) {}

/**
 * @brief Opérateur d'affectation
 * 
 * @param rootCure 
 * @return Cure& 
 */
Cure & Cure::operator = (const Cure & rootCure)
{
    if (this != & rootCure)
        AMateria::operator = (rootCure);
    return *this;
}

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
