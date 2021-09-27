/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:21:43 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/11 17:56:00 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{

public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void) const;

	std::string	const name;
	Weapon&		weapon;
};

#endif
