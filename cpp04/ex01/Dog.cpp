/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 10:29:55 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:14:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_cerebellum = new Brain();
}

Dog::Dog(const Dog& original)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_type = original._type;
	//_cerebellum = original._cerebellum;				//	This line will perform a shallow copy. Only the address of the pointer will be copied.
	_cerebellum = new Brain(*original._cerebellum);		//	This is it. Instantiate a new Brain and use the Copy constructor.
}

Dog::~Dog()
{
	delete _cerebellum;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete _cerebellum;
		_cerebellum = new Brain(*(other._cerebellum));
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "The " << this->getType() << " goes woof woof!" << std::endl;
}

const Brain* Dog::getBrain() const
{
	return _cerebellum;
}