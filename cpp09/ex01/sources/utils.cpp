/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:29:27 by igchurru          #+#    #+#             */
/*   Updated: 2025/10/27 10:04:35 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "RPN.hpp"

bool	validateInput(const std::string& input)
{
	std::string validchars = " 0123456789/*-+";
	bool		has_non_space = false;

	if (input.empty())
	{
		std::cout << "Error: Empty input" << std::endl;
		return false;
	}
	for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
	{
		if (validchars.find(*it) == std::string::npos)
		{
			std::cout << "Error: Extraneous character found: " << *it << std::endl;
			return false;
		}
		if (*it != ' ')
			has_non_space = true;
	}
	if (has_non_space == false)
	{
		std::cout << "Error: Input consists of only spaces" << std::endl;
		return false;
	}
	return true;
}
