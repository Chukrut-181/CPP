/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:44:13 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 10:24:41 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string input)
{
	_name = input;
	std::cout << "Zombie " << _name << " spawned" << std::endl;
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name << " destroyed" << std::endl;
}
