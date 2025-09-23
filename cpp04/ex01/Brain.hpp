/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:04:25 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/17 10:33:26 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
	
	public:

		std::string ideas[100];
		
		Brain();
		Brain(const Brain& model);
		~Brain();

		Brain& operator=(const Brain& other);
};
