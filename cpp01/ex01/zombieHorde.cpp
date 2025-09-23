/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:57:31 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 13:29:39 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombie.hpp"

Zombie *zombieHorde(int argv1, std::string argv2)
{
	Zombie *horde;
	int i = 0;
	
	if (argv1 <= 0)
	{
		std::cout << "Cannot create a horde with less than 1 zombie!" << std::endl;
		return (NULL);
	}
	horde = new Zombie[argv1];
	while (i < argv1)
	{
		horde[i].setName(argv2);
		horde[i].announce();
		i++;
	}
	return (horde);
}
