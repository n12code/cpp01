/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:46:22 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/17 14:44:01 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "memory address of the string :     " << &string << std::endl;
    std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "memory address held by stringREF : " << &stringREF << std::endl << std::endl;
    
    std::cout << "value of the string :              " << string << std::endl;
    std::cout << "value pointed to by stringPTR :    " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF :    " << stringREF << std::endl;
}