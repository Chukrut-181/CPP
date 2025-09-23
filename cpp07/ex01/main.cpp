/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:06:53 by igchurru          #+#    #+#             */
/*   Updated: 2025/09/11 12:50:53 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "iter.hpp"

int	main()
{
	int arr_int[] = {0, 1, 2, 3, 4};								//	Non-const array
	char arr_char[] = {'a', 'b', 'c', 'd', 'e'};
	
	const int arr_const_int[] = {5, 6, 7, 8, 9};					//	Const array
	const char arr_const_char[] = {'f', 'g', 'h', 'i', 'j'};

	std::cout << std::endl;
	std::cout << "Testing non-const elements:" << std::endl;
	iter(arr_int, 5, printer<int>);									//	Since printer is a template, the type to be printed must be specified <like_this>
	std::cout << std::endl;

	iter(arr_char, 5, printer<char>);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "Testing const elements:" << std::endl;
	iter(arr_const_int, 5, printer<const int>);						//	Same case but with constant parameters this time.
	std::cout << std::endl;

	iter(arr_const_char, 5, printer<const char>);
	std::cout << std::endl << std::endl;

	return 0;
}
