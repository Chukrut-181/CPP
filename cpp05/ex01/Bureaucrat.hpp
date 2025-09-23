/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:24:05 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/08 10:52:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include <iostream>
#include <stdexcept>

class Form;

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

		void signForm(Form &paperwork) const;

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