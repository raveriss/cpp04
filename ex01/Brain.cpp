/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:47:48 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 01:49:30 by raveriss         ###   ########.fr       */
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
    return * this;
}
