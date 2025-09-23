/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:19:02 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:06:46 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define AMATERIA_HPP

# include <iostream>
class ICharacter;			//	This is a forward declaration. No need to explicitly include AMateria, only to state that it exists.

class AMateria
{
	private:

	protected:
	
		std::string	_type;
		
	public:
	
		AMateria();
		AMateria(std::string const& _type);
		AMateria(const AMateria& original);
		virtual ~AMateria();

		AMateria& operator=(const AMateria& other);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};	


	