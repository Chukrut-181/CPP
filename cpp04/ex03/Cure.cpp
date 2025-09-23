/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:25:05 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/28 16:06:46 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Cure.hpp"
# include "ICharacter.hpp"

Cure::Cure()
{
	std::cout << "-> Cure default constructor called" << std::endl;
	_type = "cure";
}

Cure::Cure(const Cure& original)
{
	std::cout << "-> Cure copy constructor called" << std::endl;
	_type = original._type;
}

Cure::~Cure()
{
	std::cout << "-> Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		AMateria::operator=(other);
	return *this;
}

Cure* Cure::clone() const
{
	std::cout << "-> Cure cloning method called" << std::endl;
	Cure* paste = new Cure();
	return paste;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}