/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 13:11:28 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:06:46 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private:
		std::string	_sound;

	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& original);
		~WrongAnimal();

		WrongAnimal&	operator=(const WrongAnimal& other);

		void	makeSound();
		void	setSound(const std::string new_sound);
};