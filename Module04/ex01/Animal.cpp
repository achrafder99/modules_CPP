/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:58:40 by adardour          #+#    #+#             */
/*   Updated: 2023/08/08 16:23:47 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal Constructor Par default called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
    this->type = animal.type;
    std::cout << "Animal copy Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal)
{
    if (this == &animal)
    {
        return *this;
    }
    this->type = animal.type;
    std::cout << "Animal copy assignment Constructor called" << std::endl;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}