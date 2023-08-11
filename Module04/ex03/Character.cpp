/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:30:52 by adardour          #+#    #+#             */
/*   Updated: 2023/08/10 21:20:37 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

bool check_full(AMateria *inventory[4])
{
    int i = 0;
    while(i < 4)
    {
        if (inventory[i] == NULL)
            return false;
        i++;
    }   
    return true;
}

Character::Character()
{
    
}

Character::Character(std::string name): name(name)
{
    int i = 0;
    while (i < 4)
    {
        inventory[i] = NULL;
        i++;
    }
    
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (check_full(inventory) == true)
        return;
    for (int i = 0; i < 4; i++)
    {
        if(inventory[i] == NULL)
        {
                inventory[i] = m;
                break;
        }
    }
    
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        return;
    }
    inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
    {
        return;
    }
    inventory[idx]->use(target);
}

Character::Character(const Character& car)
{
    int i = 0;
    while(i < 4)
    {
        if (car.inventory[i] != NULL)
        {
            inventory[i] = car.inventory[i]->clone();
        }
        else
            inventory[i] = NULL;
        i++;
    }
}

Character &Character::operator=(const Character& car)
{
    if (this != &car)
    {
        int i = 0;
        while (i < 4)
        {
            delete inventory[i];
            if (car.inventory[i] != NULL)
            {
                inventory[i] = car.inventory[i]->clone();
            }
            else
                inventory[i] = NULL;
            i++;
        }
        name = car.name;
    }
    return (*this);
}

Character::~Character()
{
    delete *inventory;
}