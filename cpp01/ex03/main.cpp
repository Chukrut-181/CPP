/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igchurru <igchurru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:55:48 by igchurru          #+#    #+#             */
/*   Updated: 2025/06/16 10:31:06 by igchurru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Two adventurers needed for this quest!" << std::endl;
		std::cout << "Usage: ./violence <name_1> <name_2>" << std::endl;
		return (1);
	}
	
	Weapon	weap = Weapon("spiky club");
	Weapon	proj = Weapon("longbow");
	HumanA warrior = HumanA(argv[1], weap);	//	HumanA constructor MUST take a weapon. Pass a reference so that no extra weapon instances are created.

	warrior.attack();
	weap.setType("rusty sword");
	warrior.attack();

	HumanB	archer(argv[2]);				//	HumanB constructor doesn't take a weapon.
	archer.setWeapon(&proj);				//	Pass a pointer since weapon B may be empty.
	archer.attack();
	archer.setWeapon(NULL);
	archer.attack();
	
	return (0);
}
