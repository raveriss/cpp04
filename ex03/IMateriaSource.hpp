/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:37:16 by raveriss          #+#    #+#             */
/*   Updated: 2024/04/16 02:15:25 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AMateria.hpp"
#include <string>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria * createMateria(std::string const & type) = 0;
};

/*  IMATERIASOURCE_HPP  */
