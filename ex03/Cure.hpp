/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:33:55 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 18:34:00 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure() : AMateria("cure") {}
    virtual ~Cure() {}

    AMateria* clone() const override {
        return new Cure(*this);
    }

    void use(ICharacter& target) override {
        std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    }
};

#endif // CURE_HPP
