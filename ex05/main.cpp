/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:39:21 by ztouzri           #+#    #+#             */
/*   Updated: 2021/09/22 19:01:42 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen	karen;

	karen.complain("DEBUG");
	karen.complain("ERROR");
	karen.complain("WARNING");
	karen.complain("INFO");
	karen.complain("beoerkg");
	return (0);
}