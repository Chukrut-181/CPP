/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:19:05 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:20:43 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_cerebellum = new Brain();
}

Cat::Cat(const Cat& original)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = original._type;
	//_cerebellum = original._cerebellum;				//	This line will perform a shallow copy. Only the address of the pointer will be copied.
	_cerebellum = new Brain(*original._cerebellum);		//	This is it. Instantiate a new Brain and use the Copy constructor.
}

Cat::~Cat()
{
	delete _cerebellum;
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
	std::cout << "The " << _type << " goes meow meow!" << std::endl;
}

const Brain* Cat::getBrain() const
{
    return _cerebellum;
}