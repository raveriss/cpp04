/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:53:40 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/17 22:30:28 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/**
 * @brief Constructeur par défaut MateriaSource
 */
MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        materias[i] = NULL;
    }
}

/**
 * @brief Destructeur MateriaSource
 */
MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete materias[i];
    }
}

/**
 * @brief Apprentissage de AMateria dans MateriaSource
 */
void MateriaSource::learnMateria(AMateria * m) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] == NULL) {
            materias[i] = m;
            break;
        }
    }
}

/**
 * @brief Création de AMateria spécifique dans MateriaSource
 */
AMateria * MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] && materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    return NULL;
}

/*  MATERIASOURCE.CPP  */