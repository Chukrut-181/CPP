/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:40:33 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 15:51:51 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &hitter): _name(name), hitter(hitter)
{
	std::cout << "Spawned HumanA " << _name << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << _name << " has fled the battle" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << hitter.getType() << std::endl;
}