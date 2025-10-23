/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:49:11 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/23 11:22:36 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Level	stringToLevel(std::string level)
{
	if (level == "info")
		return (INFO);
	else if (level == "debug")
		return (DEBUG);
	else if (level == "warning")
		return (WARNING);
	else if (level == "error")
		return (ERROR);
	else
		return (UNKNOWN);
}

int	check_args(int argc)
{
	if (argc < 2)
	{
		std::cerr << "Harl wants to complain, please give a log level to listen to." << std::endl;
		return (1);
	}
	if (argc > 2)
	{
		std::cerr << "Harl is not automated for multitasking, please precise only one log level." << std::endl;
		return (1);
	}
	return (0);
}

std::string	str_tolower(std::string string)
{
	std::size_t	i = 0;
	
	while (i < string.length())
	{
		string[i] = std::tolower(string[i]);
		i++;
	}
	return (string);
}

int	main(int argc, char **argv)
{	
	if (check_args(argc))
		return (1);
	std::string	level = argv[1];
	Harl		harl;
	Level		lvl;
	
	level = str_tolower(level);
	lvl = stringToLevel(level);
	switch (lvl)
	{
		case INFO :
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("info");
			std::cout << std::endl;
			// fallthrough
		case DEBUG :
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("debug");
			std::cout << std::endl;
			// fallthrough
		case WARNING :
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("warning");
			std::cout << std::endl;
			// fallthrough
		case ERROR :
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("error");
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}