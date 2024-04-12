/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:46:25 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/12 17:08:03 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		// Animal(const std::string& type);  // Constructeur paramétré
		Animal(const Animal & main_Animal);
		Animal & operator=(const Animal & main_Animal);
		virtual ~Animal();

		
		virtual void makeSound() const;
		std::string getType() const;
};





