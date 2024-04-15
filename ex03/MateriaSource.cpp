/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:53:40 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 01:51:04 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        materias[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        delete materias[i];
    }
}

void MateriaSource::learnMateria(AMateria * m) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] == NULL) {
            materias[i] = m;
            break;
        }
    }
}

AMateria * MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] && materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    return NULL;
}
