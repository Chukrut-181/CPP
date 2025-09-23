/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 08:43:49 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/19 10:21:19 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &original);
		~Serializer();
		Serializer& operator=(const Serializer &other) const;
	
	protected:
	
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

