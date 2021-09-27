/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:34:10 by ztouzri           #+#    #+#             */
/*   Updated: 2021/09/27 17:55:17 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->setName(name);
}

Zombie::~Zombie(void)
{
	std::cout << "Bruhhhhhhhhhhhh" << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}

void		Zombie::setName(std::string name)
{
	this->_name = name;
}

void		Zombie::announce(void)
{
	std::cout << this->getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}
