/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:59:18 by igchurru          #+#    #+#             */
/*   Updated: 2025/09/11 12:34:08 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "templates.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "--- Testing int ---" << std::endl;
	int a_int = 2;
	int b_int = 3;
	std::cout << "Before swap:	a = " << a_int << ", b = " << b_int << std::endl;
	::swap(a_int, b_int);
	std::cout << "After swap:	a = " << a_int << ", b = " << b_int << std::endl;
	std::cout << "min(a, b) = " << min(a_int, b_int) << std::endl;
	std::cout << "max(a, b) = " << max(a_int, b_int) << std::endl;
	std::cout << std::endl;

	std::cout << "--- Testing float ---" << std::endl;
	float a_float = 42.42f;
	float b_float = 21.21f;
	std::cout << "Before swap:	a = " << a_float << ", b = " << b_float << std::endl;
	::swap(a_float, b_float);
	std::cout << "After swap:	a = " << a_float << ", b = " << b_float << std::endl;
	std::cout << "min(a, b) = " << min(a_float, b_float) << std::endl;
	std::cout << "max(a, b) = " << max(a_float, b_float) << std::endl;
	std::cout << std::endl;

	std::cout << "--- Testing char ---" << std::endl;
	char a_char = 'z';
	char b_char = 'a';
	std::cout << "Before swap:	a = " << a_char << ", b = " << b_char << std::endl;
	::swap(a_char, b_char);
	std::cout << "After swap:	a = " << a_char << ", b = " << b_char << std::endl;
	std::cout << "min(a, b) = " << min(a_char, b_char) << std::endl;
	std::cout << "max(a, b) = " << max(a_char, b_char) << std::endl;
	std::cout << std::endl;

	std::cout << "--- Testing std::string ---" << std::endl;
	std::string a_string = "Hello";
	std::string b_string = "World";
	std::cout << "Before swap:	a = " << a_string << ", b = " << b_string << std::endl;
	::swap(a_string, b_string);
	std::cout << "After swap:	a = " << a_string << ", b = " << b_string << std::endl;
	std::cout << "min(a, b) = " << min(a_string, b_string) << std::endl;
	std::cout << "max(a, b) = " << max(a_string, b_string) << std::endl;
	std::cout << std::endl;

	return 0;
}

/* int main( void )
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::cout << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	std::cout << std::endl;
	return 0;
} */

