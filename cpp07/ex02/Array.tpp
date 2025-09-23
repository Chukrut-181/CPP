/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:05:40 by igchurru          #+#    #+#             */
/*   Updated: 2025/09/09 13:28:51 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

//	A .tpp file is a header file used in C++ to separate template class definitions and implementations.
//	It is not a rule enforced by the compiler, just a common convention to organize code and improve readability.

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), _size(0) {}		//	Default constructor.

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)			//  Int-parametrized constructor: Creates an array of size 'n' and default-initializes all elements.
{
	array = new T[n]();
}

template <typename T>
Array<T>::~Array()									//	Destructor: Frees the array.
{
	delete[] array;
}

template <typename T>
Array<T>::Array(const Array& original) : _size(original._size)		//	Copy constructor: Creates a deep copy of another Array object.
{
	array = new T[_size];
	for (size_t i = 0; i < _size; ++i)
	{
		array[i] = original.array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)	//	Assignment operator: Allows one Array object to be assigned to another.
{													//	Handles self-assignment, deallocates existing memory, and performs a deep copy.
	if (this != &other) 
	{
		delete[] array;
		_size = other._size;
		array = new T[_size];
		for (size_t i = 0; i < _size; ++i)
		{
			array[i] = other.array[i];
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](size_t index)				// Subscript operator (non-const): Provides read and write access to an element at a given index.
{
	if (index >= _size)
	{
		throw std::exception();
	}
	return array[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const	// Subscript operator (const): Provides read-only access to an element at a given index for const objects.
{
	if (index >= _size)
	{
		throw std::exception();
	}
	return array[index];
}

template <typename T>
size_t Array<T>::getSize() const
{
	return _size;
}
