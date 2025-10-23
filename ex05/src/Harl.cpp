/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:58:20 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/23 10:54:55 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl () {}
Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*func_ptr_array[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::error,
		&Harl::warning
	};
	std::string levels[4] = {
		"debug",
		"info",
		"error",
		"warning"
	};
	std::size_t	i = 0;
	while (i < level.length())
	{
		level[i] = std::tolower(level[i]);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*func_ptr_array[i])();
			return ;
		}
		i++;
	}
	std::cout << "Harl does not know this instruction :   '" << level << "'." << std::endl;
}