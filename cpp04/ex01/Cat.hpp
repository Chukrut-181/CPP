/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:18:03 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:12:32 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _cerebellum;

	protected:

	public:
		Cat();
		Cat(const Cat& original);
		~Cat();

		Cat&	operator=(const Cat& other);
		
		void makeSound() const;
		const Brain* getBrain() const;		// Returns a const pointer to the Brain
};