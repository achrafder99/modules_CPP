/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:31:03 by adardour          #+#    #+#             */
/*   Updated: 2023/07/17 15:41:42 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

std::string    truncated(std::string filed)
{
    if (filed.length() > 10)
    {
        return (filed.substr(0, 10) + ".");
    }
    return (filed);
}

void    search(PhoneBook phone_book)
{
    int index = phone_book.get_index();
    int contact_index;
    std::cout << std::endl;
    std::cout << "index | ";
    std::cout << std::setw(10) << "first name | ";
    std::cout << std::setw(10) << "last name | ";
    std::cout << std::setw(10) << "nick name | ";
    std::cout << "phone " << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < index; i++)
    {
        Contact contact;
        contact = phone_book.get_contact(i);
        std::cout << i << std::setw(7) << "| ";
        std::cout << truncated(contact.get_fname()) << std::setw(13 - contact.get_fname().length()) << "| ";
        std::cout << truncated(contact.get_lname()) << std::setw(12 - contact.get_lname().length()) << "| ";
        std::cout << truncated(contact.get_nickname()) << std::setw(12 - contact.get_nickname().length()) << "| ";
        std::cout << truncated(contact.get_phone()) << std::setw(12 - contact.get_phone().length()) << std::endl;
    }
    std::cout << "Inter index of contact :";
    std::cin >> contact_index;
    while (contact_index < 0 || contact_index >  index)
    {
        std::cout << "Out of range : Try again : " ;
        std::cin >> contact_index;
    };
    Contact contact = phone_book.get_contact(contact_index);
    std::cout << phone_book.get_index() << std::endl;
    std::cout << contact.get_fname() << std::endl;
    std::cout << contact.get_lname() << std::endl;
    std::cout << contact.get_nickname() << std::endl;
    std::cout << contact.get_phone() << std::endl;
}

int main()
{
    PhoneBook phone_book;   
    int index; 
    std::string fname,lname,nickname,phone,darkest, command;
    std::cout << "ADD - SEARCH EXIT : ";
    std::getline(std::cin, command);
    while(1)
    {
        if (command == "ADD")
        {
            Contact new_contact;
            int i = 0;
            while (i <= 4)
            {
                std::cout << "First name :";
                std::getline(std::cin, fname);
                if (!fname.empty())
                {
                    i++;
                    std::cout << "Last name :";
                    std::getline(std::cin, lname);
                    if (!lname.empty())
                    {
                        i++;
                        std::cout << "nickname :";
                        std::getline(std::cin, nickname);
                        if(!nickname.empty())
                        {
                            i++;
                            std::cout << "phone number :";
                            std::getline(std::cin, phone);
                            if (!phone.empty())
                            {
                                i++;
                                std::cout << "darkest secret :";
                                std::getline(std::cin, darkest);
                                if (!darkest.empty())
                                {
                                    i++;
                                    Contact new_contact(fname, lname, nickname, phone, darkest);
                                    index = phone_book.get_index();
                                    phone_book.add_contact(new_contact, index);
                                    if (!phone_book.is_full())
                                        phone_book.set_index();
                                    std::cout << "ADD - SEARCH EXIT : ";
                                    std::getline(std::cin, command);
                                }
                                else
                                    std::cout << "Empty Filed!" << std::endl;
                            }
                            else
                                std::cout << "Empty Filed!" << std::endl;
                        }
                        else
                                std::cout << "Empty Filed!" << std::endl;
                    }
                    else
                                std::cout << "Empty Filed!" << std::endl;
                }
                else
                    std::cout << "Empty Filed!" << std::endl;
            }
        }
        else if (command == "SEARCH")
        {
            search(phone_book);
            std::cout << "ADD - SEARCH EXIT : ";
            std::getline(std::cin, command);
        }
        else if (command == "EXIT")
            break;
        else
        {
            std::cout << "Error!" << std::endl;
        }
    }
}