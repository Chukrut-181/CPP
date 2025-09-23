/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:31:55 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/12 11:35:38 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(Intern const &original)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(void)original;
}

Intern& Intern::operator=(Intern const &other)
{
	(void)other;
	return *this;
}

AForm* Intern::makeForm(std::string const name, std::string const target) const
{
	AForm *new_form = NULL;
	
	std::string	form_list[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	
	int i = 0;
	
	while (name != form_list[i] && i < 4)
		i++;
		
	switch (i)
	{
		case 0:
			new_form = new ShrubberyCreationForm(target);
			break;
		
		case 1:
			new_form = new RobotomyRequestForm(target);
			break;
	
		case 2:
			new_form = new PresidentialPardonForm(target);
			break;
	
		default:
			std::cout << "Error: Wrong or unexistent form requested" << std::endl;
			break;
	}
	return new_form;
}