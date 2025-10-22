/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:49:11 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/23 00:48:36 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int	main(int argc, char **argv)
{
	std::string	level = argv[1];
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
	std::transform(level.begin(), level.end(), level.begin(), ::tolower);
	// switch (level)
	// {
	// case	:
		
	// 	break;
	
	// default:
	// 	break;
	// }
	return (0);
}