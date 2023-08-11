/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:16:19 by adardour          #+#    #+#             */
/*   Updated: 2023/08/08 14:23:56 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat par default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
    this->type = type;
}

WrongCat::WrongCat(const WrongCat& wrong_cat) : WrongAnimal(wrong_cat)
{
    std::cout << "Wrong Cat copie constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &wrong_cat)
{
    if (this == &wrong_cat)
    {
        return (*this);
    }
    WrongAnimal::operator=(wrong_cat);
    std::cout << "Wrong cat constructor copy assignment operator" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Cat make sound" << std::endl;
}

std::string WrongCat::getType()  const
{
    return (this->type);
}

void WrongCat::setType(const std::string& type)
{
    this->type = type;
}

WrongCat::~WrongCat(){
    std::cout << "Wrong Cat destructor called" << std::endl;
}