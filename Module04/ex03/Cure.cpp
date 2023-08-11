/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:20:56 by adardour          #+#    #+#             */
/*   Updated: 2023/08/10 18:43:22 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
    
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    
}
Cure& Cure::operator=(const Cure& cure)
{
    if (this == &cure) 
    {
        return *this;
    } 
    AMateria::operator=(cure);
    return *this;
}

AMateria* Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals ";
    std::cout << target.getName();
    std::cout << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
    
}