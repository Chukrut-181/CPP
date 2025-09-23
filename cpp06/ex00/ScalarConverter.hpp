/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 08:37:51 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/20 08:18:51 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include <iostream>
#include <limits>
#include <cstdlib>

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &original);
		~ScalarConverter();
		
		ScalarConverter& operator=(ScalarConverter const &other) const;
		
	protected:
		
	public:	
		static void convert(const std::string &literal);
};

