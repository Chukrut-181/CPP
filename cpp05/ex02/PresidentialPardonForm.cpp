/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:51:11 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/12 11:47:48 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "PresidentialPardonForm.hpp"
# include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{
	std::cout << "PresidentialPardonForm constructor called for " << target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original) : AForm(original.getName(), original.getSignGrade(), original.getExecGrade())
{
	std::cout << "PresidentialPardonForm copy constructor called for " << original.getName() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called for " << getName() << std::endl;
}

bool PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (getIsSigned() == false)
	{
		std::cout << "Error: Cannot execute an unsigned form" << std::endl;
		return false;
	}
	if (getExecGrade() < executor.getGrade())
	{
		throw AForm::GradeTooLowException();
	}
	else
	{
		std::cout << getName() << " has been pardoned by Zaphod Beeblebrox, President of the Galaxy." << std::endl;
	}
	return true;
}
