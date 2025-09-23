/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:30:57 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/11 10:38:48 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "PhoneBook.hpp"
# include "Contact.hpp"

int	main(void)
{
	PhoneBook	awesome_phb;
	std::string	user_command;

	while (true)
	{
		std::cout << "Please enter a command: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> user_command;
		std::cin.ignore(1, '\n');
				
		if (user_command == "ADD")
		{
			std::cout << "ADD command selected" << std::endl;
			awesome_phb.add_contact();
		}
		else if (user_command == "SEARCH")
		{
			std::cout << "SEARCH command selected" << std::endl;
			awesome_phb.show_contacts();
		}
		else if (user_command == "EXIT")
		{
			std::cout << "Exiting Phonebook" << std::endl;
			break ;
		}
		else
			continue ;
	}
	return(0);
}
