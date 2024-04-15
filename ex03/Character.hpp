/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:36:43 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 23:49:58 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <cstddef>

class Character : public ICharacter {
private:
    std::string name;
    AMateria* inventory[4];  // Tableau de pointeurs de type AMateria

public:
    Character(const std::string& name);
    virtual ~Character();
    virtual std::string const &getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif

