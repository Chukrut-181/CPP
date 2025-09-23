/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:50:18 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/11 13:23:51 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm& operator=(const PresidentialPardonForm &other);

	protected:

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &original);
		~PresidentialPardonForm();

		bool execute(Bureaucrat const &executor) const;	
};