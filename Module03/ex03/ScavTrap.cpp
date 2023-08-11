/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 21:02:04 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 14:49:33 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constructor Created" << std::endl;
}

ScavTrap::ScavTrap(std::string name_scav)
{
    this->name = name_scav;
}
ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
    this->hit_points = scavtrap.hit_points;
    this->energy_points = scavtrap.energy_points;
    this->attack_damage = scavtrap.attack_damage;
    std::cout << "ScavTrap Constructor copie Created" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav_trap)
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

void    ScavTrap::guardGate()
{
    std::cout << "Guard Gate" << std::endl;    
}

void    ScavTrap::attack(const std::string &target)
{
   std::cout << "ScavTrap ";
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
        std::cout << "Scav Trap can't attack" << std::endl;
}

ScavTrap::~ScavTrap()
{
   std::cout << "ScavTrap Destructor Created" << std::endl;
}