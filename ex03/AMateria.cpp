/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:45:07 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/17 22:38:40 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

/**
 * @brief Constructeur paramétré AMateria
 */
AMateria::AMateria(std::string const & type) : type(type) {}

/**
 * @brief Accesseur type AMateria
 */
std::string const & AMateria::getType() const {
    return type;
}

/**
 * @brief Destructeur AMateria
 */
AMateria::~AMateria() {}

/**
 * @brief Utilisation AMateria sur cible
 * @motclef méthode, utilisation, cible, message
 * @action affiche utilisation sur cible
 */
void AMateria::use(ICharacter & target) {
    std::cout << "Using AMateria on " << target.getName() << std::endl;
}

/*  AMATERIA.CPP  */