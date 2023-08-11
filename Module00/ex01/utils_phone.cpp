/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_phone.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:35:36 by adardour          #+#    #+#             */
/*   Updated: 2023/08/01 17:25:08 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils_phone.h"

int    valid_phone(std::string& phone)
{
    int i = 0;
    while (phone[i] != '\0')
    {
        int v = phone[i];
        if (!(v >= 48 && v <= 57))
            return (0);
        i++;
    }
    return (1);
}

bool fill_field(const std::string& field_name, std::string& field_value)
{
    do {
        std::cout << "Enter " << field_name << ": ";
        if (!std::getline(std::cin, field_value)) {
            std::cin.clear();
            std::cin.ignore();
            return (false);
        }
    } while (field_value.empty());
    return (true);
}

bool fill_fields(std::string& fname, std::string& l_name, std::string& nickname, std::string& phone, std::string& darkest)
{
    if (!fill_field("First Name", fname))
        return (false);
    if (!fill_field("Last Name", l_name))
        return (false);
    if (!fill_field("Nickname", nickname))
        return (false);
    if (!fill_field("Phone", phone))
        return (false);
    while (!valid_phone(phone))
    {
        std::cout << "Phone number not valid. Try again: " << std::endl;
        fill_field("Phone", phone);
    }
    if (!fill_field("Darkest Secret", darkest))
    {
        return(false);
    }
    return (true);
}
std::string truncate(const std::string& text, int width){
    if (text.length() >= width)
        return text.substr(0, width - 1) + ".";
    return text;
}


int search(PhoneBook phonebook)
{
    int i = 0;
    int index = phonebook.get_index();

    std::cout << std::right << "index | ";
    std::cout << std::setw(10) << "First name | ";
    std::cout << std::setw(10) << "Last name  | ";
    std::cout << std::setw(10) << "Nickname " << std::endl;
    while (i < index)
    {
        Contact contact = phonebook.get_contact(i);
        std::cout << std::right << std::setw(5) << i << " | ";
        std::cout << std::setw(10) << truncate(contact.get_fname(), 10) << " | ";
        std::cout << std::setw(10) << truncate(contact.get_l_name(), 10) << " | ";
        std::cout << std::setw(10) << truncate(contact.get_nickname(), 10) << std::endl;
        i++;
    }
    std::cout << std::endl;
    int index_contact;
    std::cout << "Enter index to Get specific contact : ";
    std::cin >> index_contact;
    std::cout << std::endl;
    if(std::cin.eof())
        return (1);
    while (index_contact >= index || index_contact < 0)
    {
        std::cout << "Invalid input or out of range. Try again: ";
        std::cin >> index_contact;
    }
    std::cout << std::endl;
    Contact contact = phonebook.get_contact(index_contact);
    std::cout << "First Name     : " << contact.get_fname() << std::endl;
    std::cout << "Last Name      : " <<  contact.get_l_name() << std::endl;
    std::cout << "NickName       : " <<  contact.get_nickname() << std::endl;
    std::cout << "Phone number   : " <<  contact.get_phone_number() << std::endl;
    std::cout << "Darkest secret : " << contact.get_darkest_secret() << std::endl;
    std::cout << std::endl;
    return (0);
}