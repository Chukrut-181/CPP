/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:36:55 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/21 13:09:38 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria* _inventory[4];

	protected:

	public:
		Character();
		~Character();
		Character(const Character& original);
		Character(std::string const & name);

		Character& operator=(const Character& other);

		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

