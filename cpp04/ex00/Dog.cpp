/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:29:55 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:05:40 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& original)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = original._type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "The " << this->getType() << " goes woof woof!" << std::endl;
}