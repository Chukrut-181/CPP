/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 07:40:45 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/08 10:38:55 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class AForm
{
	private:
		const std::string 	_name;
		bool				_is_signed;
		const int 			_sign_grade;
		const int 			_exec_grade;

		AForm& operator=(const AForm &other);

	protected:

	public:
		AForm(std::string name, int tosign, int toexec);
		AForm(const AForm &original);
		virtual ~AForm();

		virtual const std::string getName() const;
		virtual bool getIsSigned() const;
		virtual int getSignGrade() const;
		virtual int getExecGrade() const;

		virtual bool beSigned(Bureaucrat const &clerk);
		virtual bool execute(Bureaucrat const &executor) const = 0;

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

std::ostream& operator<<(std::ostream& os, const AForm& Aform_obj);