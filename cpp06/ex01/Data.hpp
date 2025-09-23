/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:51:04 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/19 09:57:03 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include <string>

typedef struct s_Data
{
	std::string	first_name;
	std::string	last_name;
	int			age;
	float		money;
	bool		has_job;

}	Data;