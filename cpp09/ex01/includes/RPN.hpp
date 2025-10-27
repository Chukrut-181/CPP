/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:19:29 by igchurru          #+#    #+#             */
/*   Updated: 2025/10/22 12:17:25 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once

#include <iostream>		//	Input/Output
#include <stack>		//	Container to use
#include <algorithm>	//	Swap
#include <sstream>		//  Stringstream operations
#include <string>		//	String operations
#include <limits>		//	Overflow prevention

#define MAX_RESULT std::numeric_limits<float>::max()
#define MIN_RESULT std::numeric_limits<float>::min()

class RPN
{
	private:
		std::stack<float>*	_monton;
	
	public:
		RPN();
		RPN(const RPN& original);
		RPN& operator=(const RPN& other);
		~RPN();

		void	SolveExpression(const std::string& input);
		float	DoTheMath(float operand1, float operand2, char symbol);

};

bool	validateInput(const std::string& arg1);

