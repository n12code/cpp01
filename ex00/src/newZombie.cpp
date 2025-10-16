/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:55:23 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/16 18:08:07 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* new_zombie = new (std::nothrow) Zombie();
    
    if (!new_zombie)
        return (NULL);
    (*new_zombie).setName(name);
    return (new_zombie);
}