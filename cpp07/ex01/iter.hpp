/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:08:20 by igchurru          #+#    #+#             */
/*   Updated: 2025/09/11 12:42:43 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

# include <iostream>

//	Templates *must* be defined in the header files.

template <typename T, typename Func>			//	T is a placeholder for any Type of var. Func is the same but for a Function or callable object.
void	iter(T *address, int len, Func f)		//	They are not reserved keywords but accepted conventions. Might as well use 'X' and 'Qwerty'.
{
	for (int i = 0; i < len; i++)
	{
		f(address[i]);
	}
}

template< typename T >
void	printer(T& to_be_printed)
{
	std::cout << to_be_printed << std::endl;
	return;
}
