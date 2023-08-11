/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:11:54 by adardour          #+#    #+#             */
/*   Updated: 2023/08/08 14:15:31 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Constructor Par default called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string  type)
{
    this->type = type;
    std::cout << "WrongAnimal Constructor initialization called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrong_animal)
{
    this->type = wrong_animal.type;
    std::cout << "Wrong Animal copy Constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrong_animal)
{
    if (this == &wrong_animal)
    {
        return *this;
    }
    this->type = wrong_animal.type;
    std::cout << "wrong animal copy assignment Constructor called" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}