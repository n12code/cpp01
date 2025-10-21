/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:30:16 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/21 10:38:45 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	file_in;
	std::ofstream	file_out;
	std::string		line;
	std::string		file_name;
	std::string 	s1;
	std::string 	s2;
	std::size_t		found;
	
	if (argc != 4)
	{
		std::cerr << "not enough arguments." << std::endl;
		return (1);
	}
	file_name = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	found = -1;
	
	if (s1.empty())
	{
		std::cerr << "s1 argument is empty." << std::endl;
		return (1);
	}
	file_in.open(file_name.c_str());
	if (!file_in.is_open())
	{
		std::cerr << "failed to open the file." << std::endl;
		return (1);
	}
	file_out.open((file_name + ".replace").c_str());
	if (!file_out.is_open())
	{
		std::cerr << "failed to open the new file." << std::endl;
		file_in.close();
		return (1);
	}
	while (getline(file_in, line))
	{
		while ((found = line.find(s1, found + 1)) != std::string::npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
		}
		file_out << line << '\n';
	}
	if (file_in.bad())
	{
		file_in.close();
		file_out.close();
		std::cerr << "I/O error while reading." << std::endl;
		return (1);
	}
	else if (file_in.fail() && !file_in.eof())
	{
		file_in.close();
		file_out.close();
		std::cerr << "format error." << std::endl;
		return (1);
	}
	file_in.close();
	file_out.close();
	return(0);
}

