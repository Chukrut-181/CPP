/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:30:20 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/11 12:49:17 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# include <iostream>
# include "AForm.hpp"

class Intern
{
	private:

	protected:
	
	public:
		Intern();
		Intern(Intern const &original);
		~Intern();

		Intern& operator=(Intern const &other);

		AForm* makeForm(std::string const name, std::string const target) const;
};
