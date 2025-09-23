/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:05:05 by igchurru          #+#    #+#             */
/*   Updated: 2025/07/17 10:31:02 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor created" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Default idea";
}

Brain::Brain(const Brain& model)
{
	std::cout << "Brain copy constructor created" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = model.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor created" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}