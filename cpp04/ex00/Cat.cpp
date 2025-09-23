/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:19:05 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:05:45 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& original)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = original._type;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "The " << this->getType() << std::endl;
}