/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:09:06 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 15:31:47 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
    FragTrap frag("frag");
    display_status(frag);
    frag.attack("kook");
    frag.beRepaired(10);
    frag.takeDamage(10);
    display_status(frag);
    frag.highFivesGuys();
}