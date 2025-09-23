/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:31:10 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/11 10:49:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include <iomanip>
# include <cstdlib>

PhoneBook::PhoneBook() : _contact_count(0), _oldest_contact_index(0)
{	
	std::cout << "Phonebook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook destructor called" << std::endl;
}

static std::string	minireadline(std::string prompt)
{
	std::string	input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Input cannot be empty. Please try again." << std::endl;
		else
			return (input);
	}
}

void PhoneBook::add_contact()
{
    int index_to_add;

    if (_contact_count < MAX_CONTACTS)
    {
		std::cout << "Creating new contact" << std::endl;
        index_to_add = _contact_count;
        _contact_count++;
    }
    else
    {
        index_to_add = _oldest_contact_index;
        std::cout << "Phonebook is full. Overwriting  oldest contact" << std::endl;
        _oldest_contact_index = (_oldest_contact_index + 1) % MAX_CONTACTS;
    }
	_contact[index_to_add].setFirstName(minireadline("Enter first name: "));
    _contact[index_to_add].setLastName(minireadline("Enter last name: "));
    _contact[index_to_add].setNickname(minireadline("Enter nickname: "));
    _contact[index_to_add].setPhoneNumber(minireadline("Enter phone number: "));
    _contact[index_to_add].setDarkestSecret(minireadline("Enter darkest secret: "));
    std::cout << "--- New contact added ---" << std::endl;
}

static int	get_valid_contact_index(int max_count)
{
	std::string	input_str;
	int			index;

	while (true)
	{
		std::cout << "Enter  index to show: ";
		std::getline(std::cin, input_str);

		if (input_str.empty())
		{
			std::cout << "Input cannot be empty. Please enter a number." << std::endl;
			continue ;
		}
		index = atoi(input_str.c_str());
		if (index >= 1 && index <= max_count) {
			return (index);
		}
		else
		{
			std::cout << "Invalid index. Please enter a number between 1 and " << max_count << "." << std::endl;
		}
	}
}

void PhoneBook::show_contacts()
{
	if (_contact_count == 0)
	{
		std::cout << "The phonebook is empty. Use ADD to add contacts." << std::endl;
		return ;
	}
	std::cout << std::endl << "|" << std::setw(10) << std::right << "INDEX" << "|";
	std::cout << std::setw(10) << std::right << "FIRST NAME" << "|";
	std::cout << std::setw(10) << std::right << "LAST NAME" << "|";
	std::cout << std::setw(10) << std::right << "NICKNAME" << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < _contact_count; ++i)
    {
        _contact[i].displayContactSummary(i + 1);
    }
	int selected_index = get_valid_contact_index(_contact_count);
	_contact[selected_index - 1].displayContactDetails();
	std::cout << selected_index << std::endl;
}

