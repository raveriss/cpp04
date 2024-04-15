/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:45:07 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 00:12:34 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"  // Include here for the full definition

AMateria::AMateria(std::string const & type) : type(type) {}

std::string const & AMateria::getType() const {
    return type;
}

AMateria::~AMateria() {  // Définition
    // Le destructeur peut être vide mais doit être défini
}

void AMateria::use(ICharacter& target) {
    // Implémentation par défaut, pourrait être vide ou imprimer un message d'erreur
    std::cout << "Using AMateria on " << target.getName() << std::endl;
}