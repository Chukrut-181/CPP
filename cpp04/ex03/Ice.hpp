/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:25:14 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/18 11:19:54 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice(const Ice& original);
		~Ice();

		Ice& operator=(const Ice& other);

		Ice* clone() const;
		void use(ICharacter& target);
};

