/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:33:57 by ztouzri           #+#    #+#             */
/*   Updated: 2021/09/21 14:58:40 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*nzomb;

	randomChump("zak");
	nzomb = new Zombie("zombjpillet");
	nzomb->announce();
	delete nzomb;
	return (0);
}
