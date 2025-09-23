/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:29:08 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:05:07 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:

	protected:

	public:
		Dog();
		Dog(const Dog& original);
		~Dog();

		Dog&	operator=(const Dog& other);
		
		void makeSound() const;
};

