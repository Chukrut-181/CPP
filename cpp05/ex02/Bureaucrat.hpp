/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:24:05 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/11 11:30:26 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include <iostream>
#include <stdexcept>

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
		Bureaucrat& operator=(const Bureaucrat& other);
	
	protected:

	public:
		Bureaucrat(std::string callsign, int rank);
		Bureaucrat(const Bureaucrat& original);
		~Bureaucrat();
		

		const std::string getName() const;
		int getGrade() const;

		void promote();
		void demote();

		void signForm(AForm &paperwork) const;
		void executeForm(AForm const &form) const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
	
std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureau_obj);