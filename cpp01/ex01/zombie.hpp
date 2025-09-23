/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:41:13 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 13:27:32 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class	Zombie
{
	private:

		std::string	_name;

	public:
		
		Zombie();
		~Zombie();
		
		void	announce( void );
		void	setName(std::string name);
	
};

Zombie	*zombieHorde(int n, std::string argv2);
