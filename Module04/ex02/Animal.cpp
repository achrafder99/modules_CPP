/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:58:40 by adardour          #+#    #+#             */
/*   Updated: 2023/08/09 13:22:35 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << "AAnimal Constructor Par default called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& aanimal)
{
    this->type = aanimal.type;
    std::cout << "AAnimal copy Constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& aanimal)
{
    if (this == &aanimal)
    {
        return *this;
    }
    this->type = aanimal.type;
    std::cout << "AAnimal copy assignment Constructor called" << std::endl;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}