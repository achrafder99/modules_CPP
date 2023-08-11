/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:11:12 by adardour          #+#    #+#             */
/*   Updated: 2023/08/10 18:43:16 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"


Ice::Ice() : AMateria("ice")
{
    
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    
}
Ice& Ice::operator=(const Ice& ice)
{
    if (this == &ice) 
    {
        return *this;
    } 
    AMateria::operator=(ice);
    return *this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at ";
    std::cout << target.getName() << " * " << std::endl;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

Ice::~Ice()
{
    
}