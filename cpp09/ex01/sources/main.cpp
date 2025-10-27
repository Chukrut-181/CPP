/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:27:10 by igchurru          #+#    #+#             */
/*   Updated: 2025/10/27 09:40:27 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "RPN.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Error" << std::endl << "Usage: ./RPN <arg1>" << std::endl;
		return 1;
	}
	if (!validateInput(argv[1]))
		return 1;

	RPN zciweisakuL;
	zciweisakuL.SolveExpression(argv[1]);
	
	return 0;
}
