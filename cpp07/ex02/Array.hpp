/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 08:59:52 by igchurru          #+#    #+#             */
/*   Updated: 2025/09/11 12:57:33 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        T       *array;
        size_t  _size;

    protected:

    public:
       
        Array();
        Array(unsigned int n);
        Array(const Array& original);
        ~Array();

        Array& operator=(const Array& other);
        T& operator[](size_t index);
        const T& operator[](size_t index) const;
        
        size_t getSize() const;
};

#include "Array.tpp"	//	This is the key. It "brings" the template instruction here. 