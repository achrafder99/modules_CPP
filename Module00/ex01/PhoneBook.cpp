/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:48:42 by adardour          #+#    #+#             */
/*   Updated: 2023/07/31 17:32:59 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils_phone.h"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

PhoneBook::~PhoneBook()
{
    
}

int    PhoneBook::get_index()
{
    return (this->index);
}
void    PhoneBook::set_index()
{
    this->index += 1;
}

void    PhoneBook::add_contact(int index, Contact contact)
{
    if (index == 8)
        this->contacts[0] = contact;
    else
        this->contacts[index] = contact;
        
}

Contact    PhoneBook::get_contact(int index)
{
    return (this->contacts[index]);
}
