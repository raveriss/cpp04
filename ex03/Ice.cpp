/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:42:33 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 01:38:38 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"  // Include full definition of ICharacter here
#include <iostream>

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

AMateria* Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter & target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


