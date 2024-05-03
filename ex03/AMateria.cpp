/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:45:07 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/03 14:51:52 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

/**
 * @brief Constructeur par défaut AMateria
 */
AMateria::AMateria() : type("") {}

/**
 * @brief Constructeur paramétré AMateria
 */
AMateria::AMateria(std::string const & type) : type(type) {}

/**
 * @brief Constructeur de Recopie
 * 
 * @param other 
 */
AMateria::AMateria(const AMateria& other) : type(other.type) {}

/**
 * @brief Opérateur d’Affectation
 * 
 * @param other 
 * @return AMateria& 
 */
AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

/**
 * @brief Destructeur AMateria
 */
AMateria::~AMateria() {}

/**
 * @brief Accesseur type AMateria
 */
std::string const & AMateria::getType() const {
    return type;
}

/**
 * @brief Utilisation AMateria sur cible
 * @motclef méthode, utilisation, cible, message
 * @action affiche utilisation sur cible
 */
void AMateria::use(ICharacter & target) {
    std::cout << "Using AMateria on " << target.getName() << std::endl;
}

/*  AMATERIA.CPP  */