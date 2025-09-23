/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:35:53 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 10:40:47 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "zombie.hpp"

void	randomChump( std::string argv2 )
{
	Zombie	stalker(argv2);			//	Zombie 'stalker' is allocated on the STACK. When randomChump() finishes, 'stalker' is automatically destroyed.
}
