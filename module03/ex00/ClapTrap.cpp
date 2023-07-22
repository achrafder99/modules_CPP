/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:57:31 by adardour          #+#    #+#             */
/*   Updated: 2023/07/22 17:17:13 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int ClapTrap::get_hit()
{
    return (this->hit);
}

int ClapTrap::get_energy()
{
    return (this->energy);
}

int ClapTrap::get_attack_damage()
{
    return (this->attack_damage);
}

void ClapTrap::attack(const std::string& target)
{
    
    if (this->hit > 0)
    {
        std::cout << "ClapTrap " + this->name + " attacks " + target +", causing ";
        std::cout << this->attack_damage;
        std::cout << " points of damage!" << std::endl;
        this->energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit > 0)
    {
        if (this->hit > amount)
        {
            this->hit -= amount;
        }
        std::cout << "ClapTrap " + this->name + " takeDamage " << std::endl;
    }
}

ClapTrap::ClapTrap(std::string n) : name(n) 
{
    std::cout << "Constructor called" << std::endl;   
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->hit > 0)
    {
        if (amount > 0)
        {
            this->hit += amount;
        }
        std::cout << "ClapTrap " + this->name + " get repaired " << std::endl;
        this->energy--;
    }
}

ClapTrap::~ClapTrap(){
    
    std::cout << "Destructor called" << std::endl;   

}