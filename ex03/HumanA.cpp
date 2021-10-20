/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:21:40 by ztouzri           #+#    #+#             */
/*   Updated: 2021/10/20 21:06:24 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

std::string	HumanA::getName(void)
{
	return (this->_name);
}

Weapon&	HumanA::getWeapon(void)
{
	return (this->_weapon);
}

void	HumanA::attack(void) {
	std::cout << this->getName() << " attacks with his " << this->getWeapon().getType() << std::endl;
}