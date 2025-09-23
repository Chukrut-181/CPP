/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:48:10 by igchurru          #+#    #+#             */
/*   Updated: 2025/08/11 11:38:56 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);

	protected:

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &original);
		~RobotomyRequestForm();

		bool execute(Bureaucrat const &executor) const;
		
};