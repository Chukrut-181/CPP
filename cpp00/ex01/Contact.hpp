/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:31:06 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/12 13:00:49 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		std::string _f_name;
		std::string _l_name;
		std::string _n_name;
		std::string _phone;
		std::string _d_secret;
		
	public:
		Contact();
		~Contact();
	
		void	setFirstName(const std::string first_name);
		void	setLastName(const std::string last_name);
		void	setNickname(const std::string nick_name);
		void	setPhoneNumber(const std::string phone_number);
		void	setDarkestSecret(const std::string dark_secret);

		const std::string	getFirstName();
		const std::string	getLastName();
		const std::string	getNickname();
		const std::string	getPhoneNumber();
		const std::string	getDarkestSecret();

		void	displayContactSummary(int index);
		void	displayContactDetails();
		
};

#endif