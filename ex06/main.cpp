/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:39:21 by ztouzri           #+#    #+#             */
/*   Updated: 2021/09/24 01:17:59 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

e_options	strtooptions(std::string str)
{
	if (str == "DEBUG")
		return (debug);
	if (str == "INFO")
		return (info);
	if (str == "WARNING")
		return (warning);
	if (str == "ERROR")
		return (error);
	return (none);
}

int	main(int ac, char **av)
{
	Karen	karen;
	
	if (ac == 2)
	{
		switch (strtooptions(av[1]))
		{
			case debug:
				std::cout << "[ DEBUG ]" << std::endl;
				karen.complain("DEBUG");
				std::cout << std::endl;
			case info:
				std::cout << "[ INFO ]" << std::endl;
				karen.complain("INFO");
				std::cout << std::endl;
			case warning:
				std::cout << "[ WARNING ]" << std::endl;
				karen.complain("WARNING");
				std::cout << std::endl;
			case error:
				std::cout << "[ ERROR ]" << std::endl;
				karen.complain("ERROR");
				break ;
			default:
				std::cout << "[" << "Probably complaining about insignificant problems" << "]" << std::endl;
				break ;
		}
	}
	return (0);
}