/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:05:47 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/16 18:08:35 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    std::size_t i;
    Zombie*  zombies = new (std::nothrow) Zombie[N];
    if (!zombies)
        return (NULL);

    i = 0;
    while (i < (std::size_t)N)
    {
        zombies[i].setName(name);
        i++;
    }
    return (zombies);
}