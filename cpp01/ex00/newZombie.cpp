/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:38:02 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 10:41:39 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombie.hpp"

Zombie *newZombie(std::string argv1)
{
	Zombie	*walker;
	
	walker = new Zombie(argv1);		//	Zombie 'walker' is allocated on the HEAP using 'new'.
	return (walker);				//	This memory persists until explicitly deallocated with 'delete'.
}
