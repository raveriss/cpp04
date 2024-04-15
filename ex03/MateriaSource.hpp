/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:37:48 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 01:45:33 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

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

#endif /* MATERIASOURCE_HPP */

