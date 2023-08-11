/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:19:20 by adardour          #+#    #+#             */
/*   Updated: 2023/08/08 13:58:56 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat par default constructor called" << std::endl;
}

Cat::Cat(std::string type)
{
    this->type = type;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
    std::cout << "Cat copie constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &cat)
{
    if (this == &cat)
    {
        return (*this);
    }
    Animal::operator=(cat);
    std::cout << "Cat constructor copy assignment operator" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat make sound" << std::endl;
}

std::string Cat::getType()  const
{
    return (this->type);
}

void Cat::setType(const std::string& type)
{
    this->type = type;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}