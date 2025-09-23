/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:06:10 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/12 11:47:59 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "ShrubberyCreationForm.hpp"
# include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called for " << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : AForm(original.getName(), original.getSignGrade(), original.getExecGrade())
{
	std::cout << "ShrubberyCreationForm copy constructor called for " << original.getName() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called for " << getName() << std::endl;
}

bool ShrubberyCreationForm::execute(const Bureaucrat &executor) const
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
		
		std::string filename = this->getName() + "_shrubbery";	// Create filename
		std::ofstream outfile(filename.c_str());				// Open file stream
		if (!outfile.is_open())									// Check if file was successfully opened
		{
			throw std::runtime_error("Error: Could not open file for writing.");
		}
	outfile << "      ___" << std::endl;
	outfile << "     /* *\\" << std::endl;
	outfile << "    /   **\\" << std::endl;
	outfile << "   /  **   \\" << std::endl;
	outfile << "  /    *    \\" << std::endl;
	outfile << " /  **       \\" << std::endl;
	outfile << " \\_*__*__****/" << std::endl;
	outfile << "      | |" << std::endl;
	outfile << "-----------------" << std::endl;	// File closes by itself when 'outfile' goes out of scope.
	}
	return true;
}









