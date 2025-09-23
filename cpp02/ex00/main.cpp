/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:26:19 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/27 12:37:39 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Fixed.hpp"

int	main(void)
{
	Fixed	a;										//	Instanciamos 'a' con el constructor por defecto.
	Fixed	b(a);									//	Instanciamos 'b' como una copia de 'a'.
	Fixed	c;										//	Instanciamos 'c' con el constructor por defecto.
	
	c = b;											//	Asignamos a 'c' los valores de 'b'.

	std::cout << a.getRawBits() << std::endl;		//	Leemos el dato con su método getter.
	std::cout << b.getRawBits() << std::endl;		//	Ídem.
	std::cout << c.getRawBits() << std::endl;		//	Ídem.

	return (0);
}