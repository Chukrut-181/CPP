/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:09:51 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:13:51 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	_type = "amorfous blob";
}

Animal::Animal(const Animal& original)
{
	std::cout << "Animal copy constructor called" << std::endl;
	_type = original._type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "The " << this->getType() << " goes bleeeeeeeuuuuaaaaaaarrrgghhhh!" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}