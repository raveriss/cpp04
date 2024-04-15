/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:36:43 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 18:49:36 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <array>

class Character : public ICharacter {
private:
    std::string name;
    std::array<AMateria*, 4> inventory;

public:
    Character(std::string const &name) : name(name), inventory() {}
    virtual ~Character() {
        for (auto &materia : inventory) {
            delete materia;
        }
    }

    std::string const &getName() const override {
        return name;
    }

    void equip(AMateria* m) override {
        for (auto &slot : inventory) {
            if (slot == NULL) {
                slot = m;
                break;
            }
        }
    }

    void unequip(int idx) override {
        if (idx >= 0 && idx < static_cast<int>(inventory.size())) {
            inventory[idx] = NULL;
        }
    }

    void use(int idx, ICharacter& target) override {
        if (idx >= 0 && idx < static_cast<int>(inventory.size()) && inventory[idx] != NULL) {
            inventory[idx]->use(target);
        }
    }
};

#endif /*  CHARACTER_HPP  */
