/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:04:44 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/12 13:12:27by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void	runfile(std::fstream& file, size_t chartorun)
{
	size_t	i;
	char	c;

	i = 0;
	if (file)
	{
		while (i < chartorun)
		{
			file >> std::noskipws >> c;
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	int		found;
	int		i;
	char	c;
	std::fstream	file;
	std::string	str;
	std::string	res = "";
	std::ostringstream ss;

	if (ac == 4)
	{
		file.open(av[1], std::ios::in | std::ios::out);
		if (!file.good())
		{
			std::cerr << "file doesn't exist" << std::endl;
			return (1);
		}
		ss << file.rdbuf();
		str = ss.str();
		file.clear();
        file.seekg(0);
		i = 0;
		while (file)
		{
			found = str.find(av[2], i);
			if (i == found)
			{
				res.append(av[3]);
				i += strlen(av[2]);
				runfile(file, strlen(av[2]));
				continue ;
			}
			file >> std::noskipws >> c;
			i++;
			if (!file.eof() && c)
				res.append(1, c);
		}
		file.clear();
        file.seekg(0);
		if (!res.empty())
			std::cout << res;
		file.close();
	}
	else
		std::cout << "Usage: ./replace Filename Stringtoreplace Replacingstring" << std::endl;
	return (0);
}
