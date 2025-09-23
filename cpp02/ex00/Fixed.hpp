/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 10:14:02 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/02 08:26:18 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
	
		int					_value;
		static const int	_fbits = 8;
		
	public:
	
		Fixed();									//	Default constructor creates an object (no params).
		Fixed(const Fixed& model);					//	Copy constructor creates an object taking another object as parameter.
		~Fixed();									//	Destructor.

		Fixed&	operator=(const Fixed& other);		//	The copy assignment operator assigns a copy to an existing object. You "overload" it by telling it how to behave.

		int		getRawBits(void) const;				//	Member function: getter.
		void	setRawBits(int const raw);			//	Mamber function: setter.
};

