/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:34:12 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/08 20:29:35 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{

public:
	Zombie( std::string name );
	~Zombie();
	void	announce( void );

	std::string	name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
