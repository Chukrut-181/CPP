/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:44:13 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 13:15:29 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "A zombie has spawned!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "A zombie has been destroyed!" << std::endl;
}

void	Zombie::setName(std::string input)
{
	_name = input;
}
