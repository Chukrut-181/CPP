/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 09:05:36 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/02 12:09:38 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:

		ClapTrap();
	
	protected:
		
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_dmg;
		
	public:

		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& original);
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap& other);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	setHitPoints(int amount);
		void	setEnergyPoints(int amount);
		void	setAttackDamage(int amount);
};
