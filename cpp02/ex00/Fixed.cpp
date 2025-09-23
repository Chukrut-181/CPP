/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 10:36:30 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/27 11:27:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed& model)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = model._value;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_value = other._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits getter function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits setter function called" << std::endl;
	_value = raw;
}
