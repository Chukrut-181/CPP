/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:20:13 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:06:46 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "-> AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& _type)
{
	std::cout << "-> AMateria parametrized constructor called" << std::endl;
	this->_type = _type;
}

AMateria::AMateria(const AMateria& original)
{
	std::cout << "-> AMateria copy constructor called" << std::endl;
	_type = original._type;
}

AMateria::~AMateria()
{
	std::cout << "-> AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	std::cout << "-> AMateria copy assignment operator called" << std::endl;
	_type = other._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter&)
{

}