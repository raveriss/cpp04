/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 23:49:32 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/04 20:50:29 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/**
 * @brief Constructeur par défaut Character
 */
Character::Character() : name("Default") {
    for (int i = 0; i < 4; ++i) {
        inventory[i] = NULL;
    }
}
	
/**
 * @brief Constructeur paramétré Character avec initialisation
 */
Character::Character(const std::string & name) : name(name) {
	for (int i = 0; i < 4; ++i) {
		inventory[i] = NULL;
	}
}

/**
 * @brief Constructeur de Recopie
 * 
 * @param other 
 */
Character::Character(const Character& other) : name(other.name) {
    for (int i = 0; i < 4; ++i) {
        inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : NULL;
    }
}

/**
 * @brief Opérateur d’Affectation
 * 
 * @param other 
 * @return AMateria& 
 */
Character& Character::operator = (const Character & other) {
    if (this != &other) {
        name = other.name;
        for (int i = 0; i < 4; ++i) {
            delete inventory[i];
            inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : NULL;
        }
    }
    return *this;
}

/**
 * @brief Destructeur Character
 */
Character::~Character() {
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}

	}
}

/**
 * @brief Accesseur nom Character
 */
std::string const & Character::getName() const {
	return name;
}

/**
 * @brief Équipement de AMateria pour Character
 */
void Character::equip(AMateria * m) {
	for (int i = 0; i < 4; ++i) {
		if (inventory[i] == NULL) {
			inventory[i] = m;
			break;
		}
	}
}

/**
 * @brief Déséquipement de AMateria pour Character
 */
void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		inventory[idx] = NULL;
	}
}

/**
 * @brief Utilisation de AMateria sur cible par Character
 */
void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && inventory[idx] != NULL) {
		inventory[idx]->use(target);
	}
}

/*  CHARACTER.CPP  */
