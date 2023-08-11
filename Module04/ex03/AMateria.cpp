/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:08:02 by adardour          #+#    #+#             */
/*   Updated: 2023/08/10 17:47:48 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    
}

AMateria::AMateria(AMateria const &amateria) : type(amateria.type)
{
    
}

AMateria::AMateria(std::string const & type) : type(type)
{
    
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "using " << target.getName() << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

AMateria::~AMateria()
{
    
}