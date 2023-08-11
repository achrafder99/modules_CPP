/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:29:30 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 18:46:34 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name_diamond) : FragTrap(name_diamond), ScavTrap(name_diamond), name(name_diamond)
{
    std::cout << "DiamondTrap Constructor inisialisation" << std::endl;
    ClapTrap::setName(name_diamond + "_clap_name");
}

DiamondTrap::DiamondTrap(DiamondTrap &diamond): FragTrap(diamond) ,ScavTrap(diamond)
{
    std::cout << "DiamondTrap copie Constructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamond)
{
    std::cout << "DiamondTrap assignement operator" << std::endl;
    if (this == &diamond)
    {
        return (*this);
    }
    ScavTrap::operator=(diamond);
    FragTrap::operator=(diamond);
    return (*this); 
}

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap par default Constructor" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Hey i m " << name << " This my Clap name " << ClapTrap::name << std::endl;
}
void    DiamondTrap::attack(const std::string &target)
{
if (hit_points > 0 && energy_points > 0) {
        std::cout << "DiamondTrap attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
        if (attack_damage > 0) {
            hit_points -= attack_damage;
            energy_points -= 1;
        }
    } else {
        std::cout << "DiamondTrap can't attack." << std::endl;
    }
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor" << std::endl;
}