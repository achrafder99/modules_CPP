/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:16:04 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 14:57:26 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
    // Test ClapTrap constructor with name
    ClapTrap clapTrap("Clappy");
    clapTrap.attack("Bandit");
    clapTrap.takeDamage(30);
    clapTrap.beRepaired(20);

    // Test ClapTrap copy constructor
    ClapTrap clapTrapCopy(clapTrap);
    clapTrapCopy.attack("Spiderant");
    clapTrapCopy.takeDamage(50);
    clapTrapCopy.beRepaired(10);

    // Test ClapTrap assignment operator
    ClapTrap clapTrapAssign;
    clapTrapAssign = clapTrapCopy;
    clapTrapAssign.attack("Skag");
    clapTrapAssign.takeDamage(70);
    clapTrapAssign.beRepaired(5);

    // Test ScavTrap constructor with name
    ScavTrap scavTrap("Scavvy");
    scavTrap.attack("Loot Bandit");
    scavTrap.takeDamage(25);
    scavTrap.beRepaired(15);
    scavTrap.guardGate(); // Special capacity of ScavTrap

    // Test ScavTrap copy constructor
    ScavTrap scavTrapCopy(scavTrap);
    scavTrapCopy.attack("Rakk");
    scavTrapCopy.takeDamage(35);
    scavTrapCopy.beRepaired(25);
    scavTrapCopy.guardGate(); // Special capacity of ScavTrap

    // Test ScavTrap assignment operator
    ScavTrap scavTrapAssign;
    scavTrapAssign = scavTrapCopy;
    scavTrapAssign.attack("Loot Goon");
    scavTrapAssign.takeDamage(45);
    scavTrapAssign.beRepaired(35);
    scavTrapAssign.guardGate(); // Special capacity of ScavTra
}