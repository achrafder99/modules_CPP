/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:16:04 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 13:46:19 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    display_status(ClapTrap &claptrap)
{
    std::cout << "---- Status -------------------" << std::endl;
    std::cout << "hit point     : ";
    std::cout << claptrap.get_hit() << std::endl;
    std::cout << "enregy point  : ";
    std::cout << claptrap.get_energy_points()  << std::endl;;
    std::cout << "Attack damage : ";
    std::cout << claptrap.get_attack_damage()  << std::endl;;
    std::cout << "--------------------------------" << std::endl;
}


int main()
{
    ClapTrap clapTrap("Clap");
    display_status(clapTrap);
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.attack("Enemy 2");
    clapTrap.attack("Enemy 3");
    clapTrap.attack("Enemy 4");
    clapTrap.takeDamage(15);
    clapTrap.beRepaired(5);
    display_status(clapTrap);
    return 0;
}