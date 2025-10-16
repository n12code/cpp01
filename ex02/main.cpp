/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:46:22 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/16 19:55:31 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "memory address of the string" << &string << std::endl;
    std::cout << "memory address held by stringPTR" << string << std::endl;
    std::cout << "memory address held by stringREF" << &string << std::endl;
    
    std::cout << "value of the string" << string << std::endl;
    std::cout << "value pointed to by stringPTR" << *string << std::endl;
    std::cout << "value pointed to by stringREF" << &string << std::endl;
}