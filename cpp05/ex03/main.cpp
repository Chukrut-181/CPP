/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:33:34 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/12 12:28:30 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"
//#include "AForm.hpp"
//#include "ShrubberyCreationForm.hpp"
//#include "RobotomyRequestForm.hpp"
//#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"	// This class "pulls" all AForm concrete classes. 
#include <cstdlib>		// Needed for rand() and srand(). See RobotomyRequestForm.cpp --> execute().
#include <ctime>		// Needed to seed rand()

int main()
{
	std::srand(std::time(NULL));	// Seed once at beginning of execution.
	
	Bureaucrat runt("Apprentice", 125);
	Bureaucrat hermes("Hermes Conrad", 36);
	Bureaucrat bigboss("Number 1", 1);
	Intern clerk;
	std::cout << std::endl;
	
	std::cout << runt << std::endl;
	std::cout << hermes << std::endl;
	std::cout << bigboss << std::endl;
	std::cout << std::endl;
	
	AForm* form1 = NULL;
	AForm* form2 = NULL;
	AForm* form3 = NULL;
	AForm* form4 = NULL;
	form1 = clerk.makeForm("Shrubbery Creation", "Home");
	form2 = clerk.makeForm("Robotomy Request", "Bender");
	form3 = clerk.makeForm("Presidential Pardon", "Fry");
	form4 = clerk.makeForm("Nonexistent Form", "Zapp");
	std::cout << std::endl;

	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;
	std::cout << *form3 << std::endl;
	//std::cout << *form4 << std::endl;	// This line will segfault if uncommented because form4 is NULL.
	std::cout << std::endl;

	hermes.signForm(*form1);
	hermes.executeForm(*form1);
	std::cout << std::endl;

	hermes.signForm(*form2);
	hermes.executeForm(*form2);
	std::cout << std::endl;

	bigboss.signForm(*form3);
	bigboss.executeForm(*form3);
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form3;
	//delete form4;
	std::cout << std::endl;

	return 0;
}
