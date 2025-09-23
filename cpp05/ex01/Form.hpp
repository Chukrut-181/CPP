/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 07:40:45 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/12 12:35:22 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form
{
	private:
		const std::string 	_name;
		bool				_is_signed;
		const int 			_sign_grade;
		const int 			_exec_grade;

		Form& operator=(const Form &other);

	protected:

	public:
		Form(std::string name, int tosign, int toexec);
		Form(const Form &original);
		~Form();

		const std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		bool beSigned(const Bureaucrat &clerk);

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

std::ostream& operator<<(std::ostream& os, const Form& form_obj);