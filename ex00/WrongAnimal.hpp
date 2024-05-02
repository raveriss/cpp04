/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:33:05 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/02 11:47:04 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

/**
 * @brief Classe WrongAnimal
 * @motclef classe, WrongAnimal, type, son non-polymorphique
 * @méthodes constructeur, destructeur, constructeur de copie, opérateur d'affectation,
 * émission sonore, accesseur type
 */
class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal & other);
		WrongAnimal & operator = (const WrongAnimal & other);
		
		void makeSound() const;
		std::string getType() const;
};

