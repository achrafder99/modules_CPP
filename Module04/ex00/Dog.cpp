/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:36:24 by adardour          #+#    #+#             */
/*   Updated: 2023/08/08 13:58:24 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog par default constructor called" << std::endl;
}

Dog::Dog(std::string type)
{
    this->type = type;
}

Dog::Dog(const Dog& Dog) : Animal(Dog)
{
    std::cout << "Dog copie constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &dog)
{
    if (this == &dog)
    {
        return (*this);
    }
    Animal::operator=(dog);
    std::cout << "Dog constructor copy assignment operator" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog make sound" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::setType(const std::string& type)
{
    this->type = type;
}
Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}