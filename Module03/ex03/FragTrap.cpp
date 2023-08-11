/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:07:44 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 17:20:50 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Constructor Created" << std::endl;
}

FragTrap::FragTrap(std::string &name_frag) : ClapTrap(name_frag)
{
    std::cout << "FragTrap Constructor initialisation Created" << std::endl;
}
FragTrap::FragTrap(const FragTrap& FragTrap)
{
    this->hit_points = FragTrap.hit_points;
    this->energy_points = FragTrap.energy_points;
    this->attack_damage = FragTrap.attack_damage;
    std::cout << "FragTrap Constructor copie Created" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& scav_trap)
{
    if (this == &scav_trap)
    {
        return (*this);
    }
    this->hit_points = scav_trap.hit_points;
    this->energy_points = scav_trap.energy_points;
    this->attack_damage = scav_trap.attack_damage;
    return (*this);
}

void    FragTrap::guardGate()
{
    std::cout << "Guard Gate" << std::endl;    
}

void    FragTrap::attack(const std::string &target)
{
   std::cout << "FragTrap ";
   std::cout << "attacks ";
   std::cout << target << ", ";
   std::cout << "causing ";
   std::cout << this->attack_damage << " ";
   std::cout << "points of damage!" << std::endl;
   if (this->hit_points > 0)
    {
            if (this->attack_damage > 0)
                this->hit_points -= this->attack_damage;
            this->energy_points -= 1;
    }
    else
        std::cout << "Frag Trap can't attack" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    if (get_energy_points() > 0)
    {
        std::cout << "High five! \\(^_^)/" << std::endl;
    }
    else
        std::cout << "end the game (your lose)" << std::endl;
}

FragTrap::~FragTrap()
{
   std::cout << "FragTrap Destructor Created" << std::endl;
}