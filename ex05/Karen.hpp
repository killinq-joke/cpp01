/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:40:09 by ztouzri           #+#    #+#             */
/*   Updated: 2021/09/21 15:34:42by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
# include <map>

class Karen;

typedef	void	(Karen::*Fnptr)(void);

class Karen {

public:
	Karen(void);
	~Karen(void);
	void	complain(std::string level);
	std::map<std::string, Fnptr> map;


private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif