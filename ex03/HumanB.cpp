/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:21:48 by ztouzri           #+#    #+#             */
/*   Updated: 2021/10/20 20:24:46 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

std::string	HumanB::getName(void)
{
	return (this->_name);
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
}

Weapon	*HumanB::getWeapon(void)
{
	return (this->_weapon);
}

void	HumanB::attack(void) {
	if (!this->getWeapon())
		std::cout << this->getName() << " doesn't attack" << std::endl;
	else
		std::cout << this->getName() << " attacks with his " << this->getWeapon()->getType() << std::endl;
}
