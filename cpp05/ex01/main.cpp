/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:33:34 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/12 12:40:28 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat runt("Apprentice", 125);
	Bureaucrat hermes("Hermes Conrad", 36);
	Form id("Passport", 100, 50);
	std::cout << std::endl;
	std::cout << runt << std::endl;
	std::cout << hermes << std::endl;
	std::cout << id << std::endl;
	std::cout << std::endl;
	std::cout << runt << " attempts to sign form:" << std::endl;
	try
	{
		runt.signForm(id);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << id << std::endl;
	std::cout << std::endl;
	std::cout << hermes << " attempts to sign form:" << std::endl;
	try
	{
		hermes.signForm(id);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << id << std::endl;
	std::cout << std::endl;
	std::cout << hermes << " attempts to sign form again:" << std::endl;
	try
	{
		hermes.signForm(id);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << id << std::endl;
	std::cout << std::endl;
	try
	{
		Form wpapers("Wrong papers", 0, 58);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form morewpapers("More wrong papers", 16, 158);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	return 0;
}
