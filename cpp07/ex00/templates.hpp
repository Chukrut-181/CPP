/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:20:12 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/20 13:04:11 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

// #ifndef WHATEVER_HPP		// #The '#pragma once' directive is widely accepted but compiler-specific and NOT C++ STANDARD. 
// # define WHATEVER_HPP	// #ifndef and #endif are more cumbersome and error prone, but are C and C++ standard and the safest bet.

# include <iostream>

template <typename T>
void	swap(T &a, T &b)	// References are aliases for the original vars.
{
	T	temp = a;
	a = b;					// Any changes made to a and b within the function directly affect the vars in the calling scope.
	b = temp;
}

template <typename T>
T&	min(T &a, T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T&	max(T &a, T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

// #endif