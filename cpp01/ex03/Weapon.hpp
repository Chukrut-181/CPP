/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:27:59 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/16 10:13:52 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
	
		std::string _type;

	public:

		Weapon(std::string w_type);
		~Weapon();

		std::string	getType() const;
		void	setType(std::string new_type);
};
