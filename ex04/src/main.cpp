/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:37:40 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/19 23:08:34 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	file_in;
	std::ofstream	file_out;
	std::string		temp_file;
	std::string 	s1;
	std::string 	s2;
	std::size_t		found;
	
	if (argc != 4)
		return (1);
	s1 = argv[2];
	s2 = argv[3];
	file_in.open("file.txt");
	if (!file_in.is_open())
	{
		std::cout << "failed to open the file" << std::endl;
		return (1);
	}
	file_in >> temp_file;
	while ((found = temp_file.find(s1)) != std::string::npos)
	{
		temp_file.erase(found, s1.length());
		temp_file.insert(found, s2);
	}
	//copy into file_out
	return(0);
}

