/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:45:13 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 18:49:00 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    std::cout << "Enter name :";
    std::cin >> name;
    Zombie *zombies = zombieHorde(NUMBER_OF_ZOMBIES, name);
    for (int i = 0; i < NUMBER_OF_ZOMBIES; i++)
        zombies[i].announce();
    delete[] zombies;
    return 0;
}