/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:21:48 by ztouzri           #+#    #+#             */
/*   Updated: 2021/09/21 15:12:05 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(void) {
}

void	HumanB::setWeapon(Weapon weapon) {
	this->weapon = &weapon;
}

void	HumanB::attack(void) const {
	if (!this->weapon)
		std::cout << this->name << " doesn't attack" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon->type << std::endl;
}
