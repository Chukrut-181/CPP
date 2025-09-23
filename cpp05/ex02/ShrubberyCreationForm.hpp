/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:59:36 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/11 11:39:04 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# include "AForm.hpp"
# include <string>
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);

	protected:

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &original);
		~ShrubberyCreationForm();

		bool execute(Bureaucrat const &executor) const;

		
};
