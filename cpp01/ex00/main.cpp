/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:10:05 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 10:37:59 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie *walker;					//	Declares a pointer 'walker'. The pointer itself is on the STACK, but it will point to memory on the HEAP.
	
	if (argc != 3)
	{
		std::cout << "Usage: ./brainz <zombie_name> <ramdomchump_name>" << std::endl;
		return (1);
	}
	walker = newZombie(argv[1]);	//	Calls newZombie to create a Zombie object on the HEAP. The address of this heap-allocated Zombie is stored in the 'walker' pointer.
	randomChump(argv[2]);			//	Calls randomChump to create a Zombie object on the STACK. This zombie is created, announces itself, and is automatically destroyed at return.
	delete walker;					//	Deallocates the memory pointed to by 'walker' on the HEAP.

	return (0);
}

