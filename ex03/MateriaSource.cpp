/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:53:40 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/06 13:23:20 by raveriss         ###   ########.fr       */
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

MateriaSource::MateriaSource(const MateriaSource & rootMateriaSource) {
    for (int i = 0; i < 4; ++i) {
        if (rootMateriaSource.materias[i] != NULL)
            this->materias[i] = rootMateriaSource.materias[i]->clone();
        else
            this->materias[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete materias[i]; // Free existing materias
            materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
        }
    }
    return *this;
}

/**
 * @brief Destructeur MateriaSource
 */
MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete materias[i];
        materias[i] = NULL;
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

bool MateriaSource::isEmpty() const {
    for (int i = 0; i < 4; ++i) {
        if (materias[i] != NULL)
            return false;
    }
    return true;
}

/*  MATERIASOURCE.CPP  */