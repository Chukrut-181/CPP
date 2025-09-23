/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:31:00 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/11 10:25:12 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destructor called" << std::endl;
}

void Contact::setFirstName(std::string first_name)
{
	_f_name = first_name;
}

void Contact::setLastName(const std::string last_name)
{
	_l_name = last_name;
}

void Contact::setNickname(const std::string nick_name)
{
	_n_name = nick_name;
}

void Contact::setPhoneNumber(const std::string phone_number)
{
	_phone = phone_number;
}

void Contact::setDarkestSecret(const std::string dark_secret)
{
	_d_secret = dark_secret;
}

const std::string Contact::getFirstName()
{
	return (_f_name);
}

const std::string Contact::getLastName()
{
	return (_l_name);
}

const std::string Contact::getNickname()
{
	return (_n_name);
}

const std::string Contact::getPhoneNumber()
{
	return (_phone);
}

const std::string Contact::getDarkestSecret()
{
	return (_d_secret);
}

static std::string	truncate_string(const std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::displayContactSummary(int index)
{
	std::cout << "|" << std::setw(10) << std::right << index << "|";
	std::cout << std::setw(10) << std::right << truncate_string(getFirstName()) << "|";
	std::cout << std::setw(10) << std::right << truncate_string(getLastName()) << "|";
	std::cout << std::setw(10) << std::right << truncate_string(getNickname()) << "|" << std::endl;
}

void Contact::displayContactDetails()
{
    std::cout << std::endl << "--- Contact Details ---" << std::endl;
    std::cout << "First Name    : " << getFirstName() << std::endl;
    std::cout << "Last Name     : " << getLastName() << std::endl;
    std::cout << "Nickname      : " << getNickname() << std::endl;
    std::cout << "Phone Number  : " << getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
    std::cout << "-----------------------" << std::endl;
}
