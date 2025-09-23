/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 07:53:30 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/08 12:34:14 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "AForm.hpp"
# include "Bureaucrat.hpp"

AForm::AForm(std::string name, int tosign, int toexec) : _name(name), _sign_grade(tosign), _exec_grade(toexec)
{
	//std::cout << "AForm constructor called for " << _name << std::endl;
	if (tosign < 1 || toexec < 1)
	{
		throw AForm::GradeTooHighException();
	}
	if (tosign > 150 || toexec > 150)
	{
		throw AForm::GradeTooLowException();
	}	
	_is_signed = false;
}

AForm::AForm(const AForm& original) : _name(original._name), _sign_grade(original._sign_grade), _exec_grade(original._exec_grade)
{
	//std::cout << "AForm copy constructor called" << std::endl;
	_is_signed = false;
}

AForm::~AForm()
{
	//std::cout << "AForm destructor called for "<< _name << std::endl;
}

const std::string AForm::getName() const
{
	return _name;
}

bool AForm::getIsSigned() const
{
	return _is_signed;
}

int AForm::getSignGrade() const
{
	return _sign_grade;
}

int AForm::getExecGrade() const
{
	return _exec_grade;
}

bool AForm::beSigned(const Bureaucrat &clerk)
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
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& form_obj)
{
	os << "Form: "<< form_obj.getName() << ". Grade to sign: " << form_obj.getSignGrade() << ". Grade to execute: " << form_obj.getExecGrade() << ". ";
	if (form_obj.getIsSigned() == true)
		os << "This form is signed";
	else
		os << "This form is not signed";
	return os;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Error. Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Error. Grade is too low";
}
