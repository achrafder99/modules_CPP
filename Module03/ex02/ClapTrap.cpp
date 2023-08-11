/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:19:32 by adardour          #+#    #+#             */
/*   Updated: 2023/08/07 15:13:32 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int ClapTrap::get_hit()
{
    return (this->hit_points);
}
int ClapTrap::get_energy_points()
{
    return (this->energy_points);
}
int ClapTrap::get_attack_damage()
{
    return (this->attack_damage);   
}

ClapTrap::ClapTrap(const std::string &name_clap) : name(name_clap)
{
    std::cout << "ClapTrap Constructor Called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

ClapTrap::ClapTrap() : hit_points(100), energy_points(100), attack_damage(20)
{
    
}
ClapTrap::ClapTrap(const ClapTrap &another_object)
{
    this->hit_points = another_object.hit_points;
    this->energy_points = another_object.energy_points;
    this->attack_damage = another_object.attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this == &other)
        return (*this);
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;
    return (*this);
}

void    ClapTrap::attack(const std::string &target)
{
if (hit_points > 0 && energy_points > 0) {
        std::cout << "ClapTrap attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
        if (attack_damage > 0) {
            hit_points -= attack_damage;
            energy_points -= 1;
        }
    } else {
        std::cout << "ClapTrap can't attack." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energy_points > 0 && amount <= hit_points) {
        std::cout << "ClapTrap takes damage." << std::endl;
        hit_points -= amount;
    } else {
        std::cout << "ClapTrap can't take damage." << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points > 0 && hit_points > 0) {
        std::cout << "ClapTrap repairs itself." << std::endl;
        hit_points += amount;
    } else {
        std::cout << "ClapTrap can't repair itself." << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called" << std::endl;
}