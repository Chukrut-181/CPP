/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:08:54 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:01:38 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:

	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal& original);
		virtual ~Animal();

		Animal&	operator=(const Animal& other);

		std::string getType() const;

		virtual void makeSound() const;
};

