/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:37:48 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 02:02:05 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <cstddef>

class MateriaSource : public IMateriaSource {
private:
    AMateria * materias[4];

public:
    MateriaSource();
    virtual ~MateriaSource();

    void learnMateria(AMateria * m);
    AMateria * createMateria(std::string const & type);
};

/*  MATERIASOURCE_HPP  */

