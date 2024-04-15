/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:33:32 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 18:33:43 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice() : AMateria("ice") {}
    virtual ~Ice() {}

    AMateria* clone() const override {
        return new Ice(*this);
    }

    void use(ICharacter& target) override {
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    }
};

#endif
