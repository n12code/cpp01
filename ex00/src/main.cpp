/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:55:25 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/15 19:38:26 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name1 = "Foo";
    std::string name2 = "Oof";

    Zombie* zombie = newZombie(name1); 

    zombie->announce();
    randomChump(name2);
    delete zombie;
    return (0);
}