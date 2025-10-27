/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:04:22 by igchurru          #+#    #+#             */
/*   Updated: 2025/10/18 11:27:09 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include <iostream>			//	Printing
#include <map>				//	Container
#include <fstream>			//	Read/Write file
#include <string>			//	String manipulation
#include <sstream>			//	Stream ops for parsing and formatting
#include <exception>		//	Basic exceptions
#include <ctime>			//	Date validation
#include <cstring>			//	Parsing
#include <limits>			//	Other validations


class BitcoinExchange
{
	private:
		std::map<std::string, float> *_exchange_rates;
	
	protected:

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& original);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& other);

		void	getHistoricRecords();
		void	addRecord(const std::string& date_str, const float& value);
		float	LookUpRecord(const std::string& date);
		std::string LookUpDate(std::string& date);
};
