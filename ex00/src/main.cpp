/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:55:25 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/16 18:07:03 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
    std::string name1 = "Foo";
    std::string name2 = "Oof";
    Zombie* zombie = newZombie(name1);
    if (!zombie)
        return (1);
    zombie->announce();
    delete zombie;
    randomChump(name2);
    return (0);
}