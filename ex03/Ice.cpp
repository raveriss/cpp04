/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:42:33 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/03 14:58:54 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

/* Inclusion bibliothèque I/O standard */
#include <iostream>

/**
 * @brief Constructeur par défaut Ice
 */
Ice::Ice() : AMateria("ice") {}

/**
 * @brief Constructeur de copie Ice
 * 
 * @param rootIce 
 */
Ice::Ice(const Ice & rootIce) : AMateria(rootIce) {}

/**
 * @brief Opérateur d'affectation
 * 
 * @param rootIce 
 * @return Ice& 
 */
Ice & Ice::operator = (const Ice & rootIce)
{
    if (this != &rootIce)
        AMateria::operator = (rootIce);
    return *this;
}

/**
 * @brief Destructeur Ice
 */
Ice::~Ice() {}

/**
 * @brief Clone Ice, crée copie de l'objet
 */
AMateria * Ice::clone() const {
    return new Ice();
}

/**
 * @brief Utilisation de Ice sur cible
 */
void Ice::use(ICharacter & target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/*  ICE.CPP  */