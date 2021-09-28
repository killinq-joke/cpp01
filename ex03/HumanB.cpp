/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:21:48 by ztouzri           #+#    #+#             */
/*   Updated: 2021/09/28 17:35:48 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void) {
}

void	HumanB::setWeapon(Weapon weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const {
	if (!this->_weapon)
		std::cout << this->_name << " doesn't attack" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->type << std::endl;
}
