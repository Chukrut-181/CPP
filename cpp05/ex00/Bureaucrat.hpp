/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:24:05 by Chukrut           #+#    #+#             */
/*   Updated: 2025/08/12 12:32:18 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
		Bureaucrat& operator=(const Bureaucrat& other);	// Placed here to comply with OCF and make sure it cannot be used.
	
	protected:

	public:
		Bureaucrat(std::string callsign, int rank);
		Bureaucrat(const Bureaucrat& original);
		~Bureaucrat();
		
		const std::string getName() const;
		int getGrade() const;

		void promote();
		void demote();
	
	class GradeTooHighException : public std::exception		// This are nested classes, often used for exceptions.
	{
		public:
			virtual const char* what() const throw(); 		// The 'throw()' specifier indicates this function doesn't throw exceptions itself.
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
	
std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureau_obj);