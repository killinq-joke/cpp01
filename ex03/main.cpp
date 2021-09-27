/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:37:37 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/11 17:59:59 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	HumanB jim("Jim");
	Weapon club1 = Weapon("spiked club");
	jim.attack();
	jim.setWeapon(club1);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}
