/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:37:40 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/20 13:09:57 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	file_in;
	std::ofstream	file_out;
	std::string		temp_file;
	std::string		file_name;
	std::string 	s1;
	std::string 	s2;
	std::size_t		found;
	
	if (argc != 4)
		return (1);
	file_name = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	found = -1;
	file_in.open(file_name.c_str());
	if (!file_in.is_open())
	{
		std::cout << "failed to open the file" << std::endl;
		return (1);
	}
	getline(file_in, temp_file);
	std::cout << "temp_file : " << temp_file << std::endl; 
	while ((found = temp_file.find(s1, found + 1)) != std::string::npos)
	{
		temp_file.erase(found, s1.length());
		temp_file.insert(found, s2);
	}
	file_out.open((file_name + ".replace").c_str());
	if (!file_out.is_open())
	{
		std::cout << "failed to open the new file" << std::endl;
		file_in.close();
		return (1);
	}
	file_out << temp_file;
	file_in.close();
	file_out.close();
	return(0);
}

