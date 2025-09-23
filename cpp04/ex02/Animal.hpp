/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:08:54 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:20:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define ANIMAL_HPP

# include <iostream>

class Brain;

class Animal
{
	private:
	
	protected:
		std::string	_type;
		Animal();
		Animal(const Animal& original);

	public:
		virtual ~Animal();

		Animal&	operator=(const Animal& other);

		virtual void	makeSound() const = 0;
		virtual const Brain* getBrain() const = 0;
};

