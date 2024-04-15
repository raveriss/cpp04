/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:24:53 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/15 15:28:30 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain & operator = (const Brain & root);
		Brain(const Brain & root);
		~Brain();
		
};