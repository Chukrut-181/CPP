/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 10:14:02 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/02 08:34:53 by igchurru         ###   ########.fr       */
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
	
		Fixed();
		Fixed(const Fixed& model);
		Fixed(const int number);				//	Constructor custom que toma un int como parámetro.
		Fixed(const float number);				//	Constructor custom que toma un float como parámetro.
		~Fixed();

		Fixed&	operator=(const Fixed& other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;			//	Converts fixed-point value to float.
		int		toInt( void ) const;			//	Converts fixed-point value to int.
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed_obj);		//	Declare overload outside class because left-hand operand of "<<" (usually std::cout) is not a member of Fixed.
