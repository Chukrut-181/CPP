/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:22:37 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/12 12:51:45 by igchurru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void to_upper_string(char *string)
{
    if (!string)
        return;
    for (int i = 0; string[i] != '\0'; ++i)
        string[i] = std::toupper(string[i]);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; ++i)
        {
            to_upper_string(argv[i]);
            std::cout << argv[i];
            if (i < argc - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return (0);
}
