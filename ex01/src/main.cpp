/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:14:57 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/16 18:07:38 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
    int N;
    std::string name;
    Zombie* first_zombie;
    std::size_t i;

    N = 5;
    i = 0;
    name = "Foo";
    first_zombie = zombieHorde(N, name);
    if (!first_zombie)
        return (1);
    while (i < (std::size_t)N)
    {
        first_zombie[i].announce();
        i++;
    }
    delete[] first_zombie;
    i++;
    return (0);
}