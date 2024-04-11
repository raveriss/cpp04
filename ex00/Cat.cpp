/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:26:56 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/11 16:27:32 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {}

Cat& Cat::operator=(const Cat& other) {
    Animal::operator=(other);
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Miaou" << std::endl;
}
