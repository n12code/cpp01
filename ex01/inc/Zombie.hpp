/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbodin <nbodin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:06:05 by nbodin            #+#    #+#             */
/*   Updated: 2025/10/16 17:53:53 by nbodin           ###   ########lyon.fr   */
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

Zombie* zombieHorde(int N, std::string name);


#endif