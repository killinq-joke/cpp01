/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:21:46 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/11 17:35:30 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
class	HumanB
{

public:

	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon weapon);
	void	attack(void) const;

	std::string	name;
	Weapon		*weapon;
};

#endif
