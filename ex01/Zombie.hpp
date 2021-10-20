/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:34:12 by ztouzri           #+#    #+#             */
/*   Updated: 2021/10/20 15:14:26 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{

public:
	Zombie();
	~Zombie();
	void		announce(void);
	std::string	getName(void);
	void		setName(std::string name);

private:
	std::string	_name;

};

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde(int N, std::string name);
void	randomChump( std::string name );

#endif
