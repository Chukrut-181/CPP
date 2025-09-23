/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:25:11 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:06:46 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Ice.hpp"
# include "ICharacter.hpp"

Ice::Ice()
{
	std::cout << "-> Ice default constructor called" << std::endl;
	_type = "ice";
}

Ice::Ice(const Ice& original)
{
	std::cout << "-> Ice copy constructor called" << std::endl;
	_type = original._type;
}

Ice::~Ice()
{
	std::cout << "-> Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
		AMateria::operator=(other);
	return *this;
}

Ice* Ice::clone() const
{
	std::cout << "-> Ice cloning method called" << std::endl;
	Ice* shard = new Ice();
	return shard;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}