/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:38:25 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/17 22:37:39 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

/* Inclusion bibliothèque I/O standard */
#include <iostream>

/**
 * @brief Fonction principale pour tester la gestion de matérias
 * @motclef simulation, utilisation de matérias, création personnages, interactions
 * @action crée source de matérias, apprend matérias, équipe personnages, utilise matérias,
 * nettoie mémoire
 */
int main()
{
    IMateriaSource * src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter * me = new Character("me");

    AMateria * tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter * bob = new Character("bob");

    me->use(0, * bob);
    me->use(1, * bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}

/*  MAIN.CPP  */
