/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:34:49 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/16 10:22:20 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout << "Spawned HumanB " << _name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << _name << " has fled the battle" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their ";

	if (hitter != NULL)
		std::cout << hitter->getType();
	else
		std::cout << "bare hands (no weapon equipped)";
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon *bow)
{
	hitter = bow;
}
