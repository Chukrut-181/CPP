/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 07:53:30 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/08 13:44:32 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Form.hpp"
# include "Bureaucrat.hpp"

Form::Form(std::string name, int tosign, int toexec) : _name(name), _sign_grade(tosign), _exec_grade(toexec)
{
	std::cout << "Form constructor called for " << _name << std::endl;
	if (tosign < 1 || toexec < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (tosign > 150 || toexec > 150)
	{
		throw Form::GradeTooLowException();
	}	
	_is_signed = false;
}

Form::Form(const Form& original) : _name(original._name), _sign_grade(original._sign_grade), _exec_grade(original._exec_grade)
{
	std::cout << "Form copy constructor called" << std::endl;
	_is_signed = false;
}

Form::~Form()
{
	std::cout << "Form destructor called for "<< _name << std::endl;
}

const std::string Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _is_signed;
}

int Form::getSignGrade() const
{
	return _sign_grade;
}

int Form::getExecGrade() const
{
	return _exec_grade;
}

bool Form::beSigned(const Bureaucrat &clerk)
{
	if (_is_signed == true)
	{
		return false;
	}
	else if (clerk.getGrade() <= _sign_grade)
	{
		_is_signed = true;
		return true;		
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& form_obj)
{
	os << "Form: "<< form_obj.getName() << ". Grade to sign: " << form_obj.getSignGrade() << ". Grade to execute: " << form_obj.getExecGrade() << ". ";
	if (form_obj.getIsSigned() == true)
		os << "This form is signed";
	else
		os << "This form is not signed";
	return os;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Error. Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Error. Grade is too low";
}
