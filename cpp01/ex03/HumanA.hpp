/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:39:09 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/13 15:24:50 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:

		std::string	_name;
		Weapon		&hitter;

	public:
	
		HumanA(std::string name, Weapon &hitter);
		~HumanA();
	
		void	attack(void);
};


