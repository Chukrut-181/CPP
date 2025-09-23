/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:34:00 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 15:41:57 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:

		std::string	_name;
		Weapon		*hitter;

	public:
	
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon *bow);
		void	attack(void);
};