/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:04:31 by adardour          #+#    #+#             */
/*   Updated: 2023/08/01 17:20:10 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils_phone.h"

int main()
{
    std::cout << "ADD - SEARCH - EXIT ";
    std::string fname,l_name,nickname,phone,darkest;
    PhoneBook phone_book;
    std::string command;
    while (getline(std::cin, command))
    {
        if (command == "EXIT" || command == "ADD" || command == "SEARCH")
        {
            if (command == "ADD")
            {
                int index = phone_book.get_index();
                if (fill_fields(fname,l_name, nickname,phone,darkest) == false)
                    return (1);
                Contact contact(fname, l_name, nickname, phone, darkest);
                phone_book.add_contact(index, contact);
                if (index < 8)
                    phone_book.set_index();
                std::cout << "ADD - SEARCH - EXIT ";
            }
            else if (command == "SEARCH")
            {
                if (search(phone_book))
                {
                    std::cin.clear();    
                    std::cin.ignore();  
                    return (1);  
                }
                std::cout << "ADD - SEARCH - EXIT " ;
                std::cin.clear();
                std::cin.ignore();
            }    
            else
                break;
        }
        else
        {
            std::cout << "Error: Unknown command " << "\"" << command << "\"" << std::endl;
            std::cout << "ADD - SEARCH - EXIT " ;
        }
    }
}