/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:19:17 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 18:48:22 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define NUMBER_OF_ZOMBIES 10

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string zombie_name);
        ~Zombie();
        void    setName(std::string name);
        void announce( void );
};

Zombie* zombieHorde(int N, std::string name);

#endif
