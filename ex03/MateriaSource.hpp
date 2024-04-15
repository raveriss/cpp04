/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:37:48 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 18:49:36 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <array>

class MateriaSource : public IMateriaSource {
private:
    std::array<AMateria*, 4> materias;

public:
    MateriaSource() : materias() {}
    virtual ~MateriaSource() {
        for (auto &materia : materias) {
            delete materia;
        }
    }

    void learnMateria(AMateria* m) override {
        for (auto &slot : materias) {
            if (slot == NULL) {
                slot = m;
                break;
            }
        }
    }

    AMateria* createMateria(std::string const &type) override {
        for (auto &materia : materias) {
            if (materia && materia->getType() == type) {
                return materia->clone();
            }
        }
        return NULL;
    }
};

#endif /*  MATERIASOURCE_HPP  */
