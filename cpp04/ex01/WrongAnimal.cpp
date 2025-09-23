/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 13:12:33 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/08 13:12:35 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	_type = "wrong amorfous blob";
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	_type = original._type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	WrongAnimal::makeSound()
{
	std::cout << "The " << _type << " goes wrong bleeeeeeuuuaaaarrrrrrggghh!!!!" << std::endl;
}
