/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:31:13 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/10 16:18:20 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		static const int	MAX_CONTACTS = 8;
		Contact				_contact[MAX_CONTACTS];
		int					_contact_count;
		int					_oldest_contact_index;
		
	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	show_contacts();
		void	search_contact();
};

#endif