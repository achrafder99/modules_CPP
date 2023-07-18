/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:44:46 by adardour          #+#    #+#             */
/*   Updated: 2023/07/16 22:56:30 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact PhoneBook::get_contact(int index)
{
    return (contacts[index]);
}

void   PhoneBook::set_index()
{
    this->index_contact += 1;
}

int PhoneBook::get_index()
{
    return (this->index_contact);
}

PhoneBook::PhoneBook()
{
    index_contact = 0;
}

void PhoneBook::add_contact(Contact contact, int index)
{
    if (index == 8)
        this->contacts[0] = contact;
    else
        this->contacts[index] = contact;
}

int PhoneBook::is_full()
{
    return (index_contact == 8);
}