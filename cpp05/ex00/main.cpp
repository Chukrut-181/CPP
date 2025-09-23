/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:33:34 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/12 12:33:38 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Grade 0 scenario" << std::endl;
	try
	{
		Bureaucrat zapp("Zapp Brannigan", 0);	// This will throw...
		std::cout << zapp << std::endl;			// and this will not execute.
	}
	catch (const std::exception& e)				// Catches any exception inheriting from std::exception
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Grade 151 scenario" << std::endl;
	try
	{
		Bureaucrat fry("Philip J. Fry", 151);	// As before, this will throw
		std::cout << fry << std::endl;			// and this will never execute.
	}
	catch (const std::exception& e)				// Again, catch here
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Valid grade scenario and promotion/demotion tests" << std::endl;
	try	// PAY CLOSE ATTENTION TO THE SCOPE:
	{
		Bureaucrat hermes("Hermes Conrad", 37);
		std::cout << hermes << std::endl;
		hermes.promote();
		std::cout << hermes << std::endl;
		hermes.demote();
		std::cout << hermes << std::endl;
	}	// HERMES IS DESTROYED HERE, NOT AT FUNCTION EXIT. EACH PAIR OF CURLY BRACES CREATE THEIR OWN SCOPE.
	catch (const std::exception& e)
	{
		std::cerr << "Caught an UNEXPECTED exception: " << e.what() << std::endl;	// This is supposed NOT to happen.
	}
	std::cout << std::endl;
	std::cout << "Valid grade scenario with invalid promotion/demotion tests" << std::endl;
	Bureaucrat boss("Number 1", 1);		// NUMBERS 1 AND 150 WILL BE DESTROYED AT FUNCTION EXIT BECAUSE THEY ARE NOT WITHIN CURLY BRACES.
	std::cout << boss << std::endl;
	try
	{
		boss.promote();	// This will throw
	}
	catch(const std::exception& e)	// This means: "Catch any exception that is a std::exception (or a descendant of it), and give me a read-only reference to it named e."
	{
		std::cerr << "Caugth an expected exception: "<< e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat runt("Number 150", 150);
	std::cout << runt << std::endl;
	try
	{
		runt.demote();	// This will also throw
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caugth an expected exception: "<< e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
