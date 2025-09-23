/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 08:48:26 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/19 11:01:35 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);	// CPP-style cast. reinterpret_cast<uintptr_t>(ptr) explicitly tells the compiler to perform a bit-for-bit conversion of the pointer's memory address into an uintptr_t.
	//return (uintptr_t)ptr;					// C-style cast. A blunt instrument that tells the compiler to perform a conversion, but it can behave in several different ways depending on the types involved. It's a combination of C++ casts, including const_cast, static_cast, and reinterpret_cast. The compiler chooses the first one that succeeds.
}

 Data* Serializer::deserialize(uintptr_t raw)
 {
	return reinterpret_cast<Data *>(raw);		// CPP-style cast.
	//return (Data *)raw;						// C-style cast.
 }
