/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:56:11 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/15 19:37:22 by nbodin           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
    std::string _name;
    public:
    Zombie();
    ~Zombie();
    void    announce();
    void    setName(std::string name);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif