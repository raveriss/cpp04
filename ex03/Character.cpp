/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:49:32 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 01:53:42 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string & name) : name(name) {
    for (int i = 0; i < 4; ++i) {
        inventory[i] = NULL;
    }
}

Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        delete inventory[i];
        inventory[i] = NULL;
    }
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria * m) {
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] == NULL) {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL) {
        inventory[idx]->use(target);
    }
}
