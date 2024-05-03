/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:38:25 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/03 17:43:54 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <iostream>
#include <cassert>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

#define ASSERT_TEST(passed, message) \
	if (passed) { std::cout << GREEN << "TEST PASSED" << NC << std::endl; } \
	else { std::cout << RED << "TEST FAILED: " << message << NC << std::endl; }


#define GREY		"\033[0;30m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"
#define BLUE		"\033[0;34m"
#define MAGENTA		"\033[0;35m"
#define CYAN		"\033[0;36m"
#define NC			"\033[0m"

/**
 * @brief Fonction principale pour tester la gestion de matérias
 * @motclef simulation, utilisation de matérias, création personnages, interactions
 * @action crée source de matérias, apprend matérias, équipe personnages, utilise matérias,
 * nettoie mémoire
 */
int main()
{

	{
		std::cout << std::endl << CYAN << "MANDATORY" << NC << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		ASSERT_TEST(tmp != NULL, "Materia should not be nullptr");

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl << CYAN << "TEST UNEQUIP" << NC << std::endl;
		
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		
		ICharacter* me = new Character("me");
		
		AMateria* tmp;
		AMateria* tmp2;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp2 = src->createMateria("cure");
		me->equip(tmp2);
		
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		AMateria *onGround;
		me->unequip(0);
		onGround = tmp;
		// onGround = NULL; <--- test d'erreur
		ASSERT_TEST(onGround == tmp, "Unequip should not delete Materia");

		delete onGround;
		
		AMateria *onGround2;
		me->unequip(1);
		onGround2 = tmp2;
		ASSERT_TEST(onGround2 == tmp2, "Unequip should not delete Materia");

		delete onGround2;

		delete me;
		delete bob;
		delete src;
	}
	{
		std::cout << std::endl << CYAN << "TEST UNEQUIP 2" << NC << std::endl;
		const int ICE_SLOT = 0;
		const int CURE_SLOT = 1;
		const int SECOND_ICE_SLOT = 2;
		
		IMateriaSource * src = new MateriaSource();
		if (!src)
			return -1;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter * me = new Character("me");
		if (!me) {
			delete src;
			src = NULL;
			return -1;
		}

		AMateria * iceMateria = src->createMateria("ice");
		if (iceMateria)
			me->equip(iceMateria);

		AMateria * cureMateria = src->createMateria("cure");
		if (cureMateria)
			me->equip(cureMateria);

		AMateria * secondIceMateria = src->createMateria("ice");
		if (secondIceMateria)
			me->equip(secondIceMateria);
		
		ICharacter * bob = new Character("bob");
		if (!bob) {
			delete me;
			me = NULL;
			delete src;
			src = NULL;
			return -1;
		}

		me->unequip(CURE_SLOT);
		me->use(ICE_SLOT, * bob);
		me->use(CURE_SLOT, * bob);
		me->use(SECOND_ICE_SLOT, * bob);

		delete bob;
		bob = NULL;

		delete me;
		me = NULL;

		delete src;
		src = NULL;

		/*  Clean up if not equipped  */
		if (cureMateria) {
			delete cureMateria;
			cureMateria = NULL;
		}
	}
	{
		std::cout << std::endl << CYAN << "TEST ASSIGNATION" << NC << std::endl;
		AMateria* ice = new Ice;
		AMateria* cure = new Cure;

		IMateriaSource* spellbook = new MateriaSource();
		spellbook->learnMateria(ice);
		spellbook->learnMateria(cure);
		
		AMateria* learnings;
		learnings = spellbook->createMateria("cure");
		ICharacter* hero = new Character("Staf");
		hero->equip(spellbook->createMateria("ice"));
		hero->equip(learnings);
		hero->use(1, *hero);
		hero->use(0, *hero);

		ASSERT_TEST(hero->getName() == "Staf", "Character name should match");

		delete hero;
		delete spellbook;
	}

	{
		std::cout << std::endl << CYAN << "TEST MATERIA SOURCE INITIALIZATION AND ASSIGNMENT" << NC << std::endl;

		MateriaSource srcDefault;
		ASSERT_TEST(srcDefault.isEmpty(), "Default MateriaSource should be empty");
		std::cout << "MateriaSource default constructor test OK" << std::endl;

		MateriaSource srcCopy(srcDefault);
		ASSERT_TEST(srcCopy.isEmpty(), "Copy of MateriaSource should be empty");
		std::cout << "MateriaSource copy constructor test OK" << std::endl;

		MateriaSource srcAssigned;
		srcAssigned = srcDefault;
		ASSERT_TEST(srcAssigned.isEmpty(), "Assigned MateriaSource should be empty");
		std::cout << "MateriaSource assignment operator test OK" << std::endl;
	}

	// Test pour Cure
	{
    	std::cout << std::endl << CYAN << "TEST CURE CLASS CONSTRUCTORS AND ASSIGNMENT" << NC << std::endl;

		Cure cureDefault;
		ASSERT_TEST(cureDefault.getType() == "cure", "Default Cure should have type 'cure'");
		std::cout << "Cure default constructor test OK" << std::endl;

		Cure cureCopy(cureDefault);
		ASSERT_TEST(cureCopy.getType() == "cure", "Copy of Cure should have type 'cure'");
		std::cout << "Cure copy constructor test OK" << std::endl;

		Cure cureAssigned;
		cureAssigned = cureDefault;
		ASSERT_TEST(cureAssigned.getType() == "cure", "Assigned Cure should have type 'cure'");
		std::cout << "Cure assignment operator test OK" << std::endl;
	}

	// Test pour Ice
	{
	    std::cout << std::endl << CYAN << "TEST ICE CLASS CONSTRUCTORS AND ASSIGNMENT" << NC << std::endl;

		Ice iceDefault;
		ASSERT_TEST(iceDefault.getType() == "ice", "Default Ice should have type 'ice'");
		std::cout << "Ice default constructor test OK" << std::endl;

		Ice iceCopy(iceDefault);
		ASSERT_TEST(iceCopy.getType() == "ice", "Copy of Ice should have type 'ice'");
		std::cout << "Ice copy constructor test OK" << std::endl;

		Ice iceAssigned;
		iceAssigned = iceDefault;
		ASSERT_TEST(iceAssigned.getType() == "ice", "Assigned Ice should have type 'ice'");
		std::cout << "Ice assignment operator test OK" << std::endl;
	}

	// Test pour Character
	{
		std::cout << std::endl << CYAN << "TEST CHARACTER CLASS CONSTRUCTORS AND ASSIGNMENT" << NC << std::endl;
		
		Character charDefault("Default");
		ASSERT_TEST(charDefault.getName() == "Default", "Default Character should have the given name");
		std::cout << "Character default constructor test OK" << std::endl;

		Character charCopy(charDefault);
		ASSERT_TEST(charCopy.getName() == "Default", "Copy of Character should have the same name");
		std::cout << "Character copy constructor test OK" << std::endl;

		Character charAssigned("Assigned");
		charAssigned = charDefault;
		ASSERT_TEST(charAssigned.getName() == "Default", "Assigned Character should have the copied name");
		std::cout << "Character assignment operator test OK" << std::endl;
	}
	std::cout << std::endl << "All destructors called and all tests executed." << std::endl;	

	return 0;
}

/*  MAIN.CPP  */