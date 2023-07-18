/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 07:55:22 by adardour          #+#    #+#             */
/*   Updated: 2023/07/18 08:16:05 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        ~Zombie();
        Zombie(std::string name_zombie);
        void announce( void );
        Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif