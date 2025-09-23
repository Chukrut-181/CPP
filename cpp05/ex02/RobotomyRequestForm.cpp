/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:48:51 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/12 11:47:52 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "RobotomyRequestForm.hpp"
# include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called for " << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : AForm(original.getName(), original.getSignGrade(), original.getExecGrade())
{
	std::cout << "RobotomyRequestForm copy constructor called for " << original.getName() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called for " << getName() << std::endl;
}

bool RobotomyRequestForm::execute(const Bureaucrat &executor) const
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
		std::cout << "BRRRRRRRR... WHIZZZZZZZZZ... KLANG KLANG KLANG... " << std::endl;
		if (rand() % 2 == 0)
			std::cout << "Robotomy process on " << getName() << " finished successfully" << std::endl;
		else
			std::cout << "Robotomy process on " << getName() << " failed" << std::endl;
	}
	return true;
}