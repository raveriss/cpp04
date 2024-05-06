/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:47:48 by raveriss          #+#    #+#             */
/*   Updated: 2024/05/07 00:33:07 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain & root)
{
    std::copy(root._ideas, root._ideas + 100, _ideas);
    std::cout << "Brain copy constructor called" << std::endl;	
}

Brain & Brain::operator=(const Brain & root) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != & root) {
        std::copy(root._ideas, root._ideas + 100, _ideas);
    }
    return *this;
}

void Brain::setIdea(int index, const std::string &idea) {
    if (index >= 0 && index < 100) {
        _ideas[index] = idea;
    } else {
        std::cerr << "Index out of bounds" << std::endl;
    }
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return _ideas[index];
    } else {
        std::cerr << "Index out of bounds" << std::endl;
        return "";
    }
}
