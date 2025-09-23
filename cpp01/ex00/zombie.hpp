/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:41:13 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 10:49:43 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:

		std::string	_name;

		void announce( void );
				
	public:
		
		Zombie(std::string name);
		~Zombie();
	
};

//	GLOBAL FUNCTION DECLARATIONS (Prototypes)
//	These functions are NOT part of the Zombie class. They are standalone functions that operate with Zombie objects.
//	These declarations are crucial so that files like main.cpp, which call these functions, know they exist and what their signatures are.

void randomChump( std::string name );
Zombie *newZombie(std::string name);
