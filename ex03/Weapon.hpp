/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:57:39 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/08 20:31:13 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class	Weapon {

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string const	getType(void);
	void				setType(std::string type);

	std::string	type;
};

#endif
