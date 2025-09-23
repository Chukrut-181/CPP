/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:57:59 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/08 12:33:46 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

		ScavTrap();
		//	SCAVTRAP POSESSES ALL ATTRIBUTES (_name, _hit_points, etc ...) FROM CLAPTRAP, BUT CANNOT ACCESS THEM SICE THEY ARE PRIVATE
		//	Attributes must not be redeclared, but have to be set via public setters from the ClapTrap class which ScavTrap can access.
		
	public:

		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& model);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap& other);
		
		void	attack(const std::string& target);
		void	guardGate();
		
};