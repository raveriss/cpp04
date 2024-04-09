/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:44:17 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/15 11:53:33 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal {
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    virtual ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& other);

    virtual std::string getType() const;
    virtual void makeSound() const;

protected:
    std::string type;
};

#endif


