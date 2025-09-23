/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:14:58 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/08 12:46:13 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

		FragTrap();

	public:

		FragTrap(std::string callsign);
		FragTrap(const FragTrap& model);
		~FragTrap();

		FragTrap& operator=(const FragTrap& other);

		void	attack(const std::string& target);
		void highFivesGuys(void);
};

