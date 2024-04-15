/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:32:40 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 18:33:17 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria {
protected:
    std::string type;

public:
    AMateria(std::string const &type) : type(type) {}
    virtual ~AMateria() {}

    std::string const &getType() const { return type; }

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) {
        (void)target;
    }
};

#endif
