/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:25:08 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/18 11:19:47 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(const Cure& original);
		~Cure();

		Cure& operator=(const Cure& other);

		Cure* clone() const;
		void use(ICharacter& target);
};
