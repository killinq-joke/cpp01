/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:08:10 by ztouzri           #+#    #+#             */
/*   Updated: 2021/10/20 17:06:09 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string const	Weapon::getType(void)
{
	return (this->type);
}
