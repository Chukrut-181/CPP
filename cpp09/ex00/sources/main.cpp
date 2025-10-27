/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:03:15 by igchurru          #+#    #+#             */
/*   Updated: 2025/10/23 15:04:36 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "../includes/BitcoinExchange.hpp"

bool	checkDate(std::string& date_str);			//	Forward declarations of helper functions
float	checkKoins(std::string& koins_str);

int	main(int argc, char** argv)
{
	std::string 		line;
	std::string			date_str;
	std::string			koins_str;
	float				koins;
	std::stringstream	ss;
	float				temp;
	
	if (argc != 2 || argv[1] == NULL)							//	Parse arguments
	{
		std::cout << "Error" << std::endl << "Usage: ./btc <arg1>" << std::endl;
		return 1;
	}
	
	BitcoinExchange *office = new BitcoinExchange();			//	Set up office
	try
	{
		office->getHistoricRecords();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		delete office;
		return 1;
	}

	std::ifstream input(argv[1]);								//	Read -if possible- input data.
	try
	{
		if (!input.is_open())
			throw std::runtime_error("Error: Cannot open input file");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete office;
		return 1;
	}
	std::getline(input, line, '\n');							//	Read and discard header line from input
	while (std::getline(input, line, '\n'))						//	Read subsequent lines in a loop
	{
		std::stringstream ss(line);								//	Convert just-read-line to stream
		std::getline(ss, date_str, '|');						//	Extract date part up to the '|'
		if(!checkDate(date_str))								//	Validate it
		{
			std::cout << date_str << ": Error: Invalid date" << std::endl;
			continue;
		}
		date_str = date_str.erase(10);
		date_str = office->LookUpDate(date_str);
		std::getline(ss, koins_str, '\n');						//	Extract value part up to the '\n'
		koins = checkKoins(koins_str);							//	Then convert and validate it.
		if(koins == -1)
		{
			std::cout << date_str << ": Error: Invalid value: " << koins_str << std::endl;
			continue;
		}
		else
		{
			temp = koins * office->LookUpRecord(date_str);
			std::cout << date_str << " => " << koins << " = " << temp << std::endl;
		}
	}
	input.close();
	delete office;
	return 0;
}