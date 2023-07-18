/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 07:54:33 by adardour          #+#    #+#             */
/*   Updated: 2023/07/18 08:19:59 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int zombies_number;
    std::cout << "Enter a number of zombies :";
    std::cin >> zombies_number;
    Zombie *zombies = zombieHorde(zombies_number,"test");
    int i = 0;
    while (i < zombies_number)
    {
        zombies[i].announce();
        i++;
    }
    delete [] zombies;
}