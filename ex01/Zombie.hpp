/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:34:12 by ztouzri           #+#    #+#             */
/*   Updated: 2021/09/21 15:00:43 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{

public:
	Zombie(void);
	~Zombie();
	void	announce(void);

	std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);
void randomChump(std::string name);

#endif
