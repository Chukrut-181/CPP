/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:10:05 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 13:31:17 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie *horde;
	
	if (argc != 3)
	{
		std::cout << "Usage: ./horde <nº_of_zombies> <zombie_name>" << std::endl;
		return (1);
	}
	horde = zombieHorde(atoi(argv[1]), argv[2]);
	if (horde == NULL)
    {
        std::cout << "Horde creation failed!" << std::endl;
        return (1);
    }
	delete[] horde;
	return (0);
}

