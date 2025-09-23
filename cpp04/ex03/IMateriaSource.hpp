/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:02:20 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:06:46 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include <iostream>

class IMateriaSource
{
	private:
		IMateriaSource(const IMateriaSource& original);
		IMateriaSource& operator=(const IMateriaSource& other);

	protected:
		IMateriaSource() {};

	public:

		virtual ~IMateriaSource() {}										//	Public declaration of destructor is crucial for proper polymorphic cleanup when deleting objects through a base pointer.
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & _type) = 0;
};
