/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adardour <adardour@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:14:27 by adardour          #+#    #+#             */
/*   Updated: 2023/08/02 15:03:24 by adardour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int converted_to_int(std::string level)
{
    return (level == "DEBUG" ? 0 : level == "INFO" ? 1 : level == "WARNING" ? 2 : level == "ERROR" ? 3 : -1);
}

void    Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "Debug messages contain contextual information. They are mostly \n \
    used for problem diagnosis.\n\
    Example: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "These messages contain extensive information. They are helpful for\n\
    tracing program execution in a production environment.\n\
    Example: \"I cannot believe adding extra bacon costs more money. You didn’t put\n\
    enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" << std::endl;   
}

void    Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "Warning messages indicate a potential issue in the system.\n\
    However, it can be handled or ignored.\n\
    Example: \"I think I deserve to have some extra bacon for free. I’ve been coming for\n\
    years whereas you started working here since last month.\"" << std::endl;
}

void    Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "These messages indicate an unrecoverable error has occurred.\n\
    This is usually a critical issue that requires manual intervention.\n\
    Example: \"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void    Harl::complain(std::string level)
{
    int level_int = converted_to_int(level);
    void (Harl::* pt_f_to_ptr) (void) = nullptr;
    switch (level_int)
    {
        case 0:
            pt_f_to_ptr = &Harl::debug; 
            break;
        case 1:
            pt_f_to_ptr = &Harl::info; 
            break;
        case 2:
            pt_f_to_ptr = &Harl::warning; 
            break;
        case 3:
            pt_f_to_ptr = &Harl::error; 
            break;
        default:
            std::cout << "Error at level try again" << std::endl;
    }
    if (pt_f_to_ptr != nullptr)
        (this->*pt_f_to_ptr)();
}
