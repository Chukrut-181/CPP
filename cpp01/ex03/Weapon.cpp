/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:29:29 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 15:51:25 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Weapon.hpp"

Weapon::Weapon(std::string w_type)
{
	_type = w_type;
}

Weapon::~Weapon()
{
	std::cout << _type << " has been dropped" << std::endl;
}

std::string	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}