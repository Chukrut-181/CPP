/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:18:03 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:05:00 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:

	protected:

	public:
		Cat();
		Cat(const Cat& original);
		~Cat();

		Cat&	operator=(const Cat& other);

		void makeSound() const;
};