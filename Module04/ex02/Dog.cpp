/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:36:24 by adardour          #+#    #+#             */
/*   Updated: 2023/08/10 18:41:00 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
    this->type = "Dog";
    std::cout << "Dog par default constructor called" << std::endl;
    
    try
    {
        brain = new Brain();
    } catch (const std::bad_alloc& e)
    {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }
}

Dog::Dog(const Dog& dog) : AAnimal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
   
    try {
        this->brain = new Brain(*dog.brain);
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }
}

Dog& Dog::operator=(const Dog &dog)
{
    if (this == &dog)
    {
        return (*this);
    }
    AAnimal::operator=(dog);
    std::cout << "Dog copy assignment operator" << std::endl;
    delete this->brain; 
    try {
           this->brain = new Brain(*dog.brain);

    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }
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
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}