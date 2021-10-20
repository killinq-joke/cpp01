/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:33:57 by ztouzri           #+#    #+#             */
/*   Updated: 2021/10/20 14:43:44 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zomb("lbally");
	Zombie	*nzomb;

	randomChump("zak");
	nzomb = new Zombie("zombjpillet");
	zomb.announce();
	nzomb->announce();
	delete nzomb;
	nzomb = newZombie("zombrcheiko");
	nzomb->announce();
	delete nzomb;
	return (0);
}
