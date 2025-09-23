/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:33:34 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/11 12:02:56 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat runt("Apprentice", 125);
	Bureaucrat hermes("Hermes Conrad", 36);
	Bureaucrat bigboss("Number 1", 1);
	std::cout << std::endl;
	std::cout << runt << std::endl;
	std::cout << hermes << std::endl;
	std::cout << bigboss << std::endl;
	std::cout << std::endl;
	ShrubberyCreationForm plantpermit("Home Garden");
	RobotomyRequestForm tinkerpermit("Brain inspection");
	PresidentialPardonForm amnesty("Full pardon");
	//ShrubberyCreationForm otherpermit(plantpermit);
	//RobotomyRequestForm othertinker(tinkerpermit);
	//PresidentialPardonForm otheramnesty(amnesty);
	std::cout << plantpermit << std::endl;
	std::cout << tinkerpermit << std::endl;
	std::cout << amnesty << std::endl;
	//std::cout << otherpermit << std::endl;
	//std::cout << othertinker << std::endl;
	//std::cout << otheramnesty << std::endl;
	std::cout << std::endl;
	
	try
	{
		runt.signForm(plantpermit);
		runt.signForm(tinkerpermit);
		runt.signForm(amnesty);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	
	try
	{
		runt.executeForm(plantpermit);
		runt.executeForm(tinkerpermit);
		runt.executeForm(amnesty);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		hermes.signForm(plantpermit);
		hermes.signForm(tinkerpermit);
		hermes.signForm(amnesty);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		hermes.executeForm(plantpermit);
		hermes.executeForm(tinkerpermit);
		hermes.executeForm(amnesty);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bigboss.signForm(plantpermit);
		bigboss.signForm(tinkerpermit);
		bigboss.signForm(amnesty);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		bigboss.executeForm(plantpermit);
		bigboss.executeForm(tinkerpermit);
		bigboss.executeForm(amnesty);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
