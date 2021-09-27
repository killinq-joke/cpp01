/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:15:01 by ztouzri           #+#    #+#             */
/*   Updated: 2021/09/21 15:00:46 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int		i;

	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i].name = name;
		i++;
	}
	return (horde);
}
