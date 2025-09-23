/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:40:24 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/11 13:26:28 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// Constructor
Bureaucrat::Bureaucrat(std::string callsign, int rank) : _name(callsign)
{
	std::cout << "Bureaucrat constructor called for " << _name << std::endl;
	if (rank < 1)
		throw Bureaucrat::GradeTooHighException();
	if (rank > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = rank;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& original) : _name(original._name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	_grade = original._grade;
}

// Destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called for " << _name << std::endl;
}

// Name getter
const std::string Bureaucrat::getName() const
{
	return _name;
}

// Grade getter
int Bureaucrat::getGrade() const
{
	return _grade;
}

//	Grade setters
void Bureaucrat::promote()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
	std::cout << _name << " has been promoted to grade " << _grade << std::endl;
}

void Bureaucrat::demote()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();	
	_grade++;
	std::cout << _name << " has been demoted to grade " << _grade << std::endl;
}

void Bureaucrat::signForm(AForm &paperwork) const
{
	if (paperwork.beSigned(*this) == true)
	{
		std::cout << *this << ", signed form " << paperwork.getName() << std::endl;
	}
	else
	{
		std::cout << *this << " could not sign form " << paperwork.getName() << " because it is already signed" << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form) const
{
	if (form.execute(*this) == true)
	{
		std::cout << getName() << " executed form " << form.getName() << std::endl;
	}
	else
	{
		std::cout << *this << " could not execute form " << form.getName() << " because it is not signed" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureau_obj)
{
	os << Bureau_obj.getName() << ", bureaucrat grade " << Bureau_obj.getGrade();
	return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error. Grade is too high. Maximum grade is 1";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error. Grade is too low. Minimum grade is 150";
}