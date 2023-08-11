/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:28:24 by adardour          #+#    #+#             */
/*   Updated: 2023/07/18 11:35:26 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType () const
{
    return (type);
}

Weapon::Weapon(){
    
}

void    Weapon::setType(const std::string type)
{
    this->type = type;
}

Weapon::Weapon(std::string w_type) : type(w_type)
{
    
}